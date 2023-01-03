/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:55:33 by yonghlee          #+#    #+#             */
/*   Updated: 2022/09/12 16:11:11 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	init_philo(t_philo **philo, t_arg *arg)
{
	int	i;

	i = -1;
	*philo = malloc(sizeof(t_philo) * arg->philo_num);
	if (!philo)
		return (ERROR);
	while (++i < arg->philo_num)
	{
		(*philo)[i].arg = arg;
		(*philo)[i].id = i;
		(*philo)[i].left = i;
		(*philo)[i].right = (i + 1) % arg->philo_num;
		(*philo)[i].eat_count = 0;
	}
	return (SUCCESS);
}

static int	init_mutex(t_arg *arg)
{
	int	i;

	i = -1;
	arg->forks = malloc(sizeof(pthread_mutex_t) * arg->philo_num);
	if (!(arg->forks))
		return (ERROR);
	while (++i < arg->philo_num)
	{
		if (pthread_mutex_init(&(arg->forks[i]), NULL))
			return (ERROR);
	}
	return (SUCCESS);
}

int	init_argument(t_arg *arg, char **argv)
{
	arg->philo_num = ft_atoi(argv[1]);
	arg->time_to_die = ft_atoi(argv[2]);
	arg->time_to_eat = ft_atoi(argv[3]);
	arg->time_to_sleep = ft_atoi(argv[4]);
	arg->start_time = get_time();
	if (arg->philo_num < 1 || arg->time_to_die <= 0 || arg->time_to_eat <= 0
		|| arg->time_to_sleep <= 0)
		return (ERROR);
	if (argv[5])
	{
		arg->eat_times = ft_atoi(argv[5]);
		if (arg->eat_times < 1)
			return (ERROR);
	}
	if (init_mutex(arg) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
