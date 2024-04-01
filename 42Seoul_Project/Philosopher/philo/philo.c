/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:41:36 by yonghlee          #+#    #+#             */
/*   Updated: 2022/09/11 16:47:48 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	smart_timer(int time)
{
	long long	start;
	long long	now;

	now = 0;
	start = get_time();
	while ((now - start) <= (long long)time)
	{
		now = get_time();
		usleep(100);
	}
}

void	philo_printf(t_arg *arg, int id, char *msg)
{
	long long	now;

	now = get_time();
	printf("[%lld]ms \t: %d %s \n", now - arg->start_time, id + 1, msg);
}

void	philo_eating(t_arg *arg, t_philo *philo)
{
	pthread_mutex_lock(&(arg->forks[philo->left]));
	philo_printf(arg, philo->id, "has taken a fork");
	pthread_mutex_lock(&(arg->forks[philo->right]));
	philo_printf(arg, philo->id, "has taken a fork");
	philo_printf(arg, philo->id, "is eating");
	smart_timer(arg->time_to_eat);
	philo->last_eat_time = get_time();
	philo->eat_count += 1;
	pthread_mutex_unlock(&(arg->forks[philo->right]));
	pthread_mutex_unlock(&(arg->forks[philo->left]));
}

void	philo_sleep_think(t_arg *arg, t_philo *philo)
{
	philo_printf(arg, philo->id, "is sleeping");
	smart_timer(arg->time_to_sleep);
	philo_printf(arg, philo->id, "is thinking");
}

void	moniter(t_arg *arg, t_philo *philo)
{
	int			i;
	long long	now;

	while (!arg->flag)
	{
		if ((arg->eat_times != 0) && (arg->philo_num == arg->finished_eat))
		{
			arg->flag = true;
			return ;
		}
		i = -1;
		while (++i < arg->philo_num)
		{
			now = get_time();
			if ((now - philo[i].last_eat_time) >= arg->time_to_die)
			{
				philo_printf(arg, i, "died");
				arg->flag = true;
				return ;
			}
		}
	}
}
