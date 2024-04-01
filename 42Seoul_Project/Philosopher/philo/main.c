/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:05:30 by yonghlee          #+#    #+#             */
/*   Updated: 2022/09/11 16:48:28 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	free_thread(t_arg *arg, t_philo *philo)
{
	int	i;

	i = 0;
	while (i < arg->philo_num)
		pthread_mutex_destroy(&(arg->forks[i++]));
	free(philo);
	free(arg->forks);
}

void	*philosopher(void *man)
{
	t_arg	*arg;
	t_philo	*philo;

	philo = man;
	arg = philo->arg;
	if (philo->id % 2)
		smart_timer(100);
	while (!arg->flag)
	{
		philo_eating(arg, philo);
		if (arg->eat_times == philo->eat_count)
		{
			arg->finished_eat++;
			break ;
		}
		philo_sleep_think(arg, philo);
	}
	return (0);
}

int	thread_start(t_arg *arg, t_philo *philo)
{
	int	i;

	i = -1;
	while (++i < arg->philo_num)
	{
		philo[i].last_eat_time = get_time();
		if (pthread_create(&(philo[i].thread), NULL, philosopher, &(philo[i])))
			return (ERROR);
	}
	moniter(arg, philo);
	free_thread(arg, philo);
	return (SUCCESS);
}

int	main(int argc, char **argv)
{
	t_arg	arg;
	t_philo	*philo;

	memset(&arg, 0, sizeof(t_arg));
	if (argc != 5 && argc != 6)
		return (ft_error("Argument need 5 or 6\n"));
	if (init_argument(&arg, argv) == ERROR)
		return (ft_error("Argument Error\n"));
	if (init_philo(&philo, &arg) == ERROR)
		return (ft_error("Philo Error\n"));
	thread_start(&arg, philo);
	return (0);
}
