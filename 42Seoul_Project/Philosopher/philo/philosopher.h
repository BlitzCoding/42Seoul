/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:05:25 by yonghlee          #+#    #+#             */
/*   Updated: 2022/09/11 16:47:24 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# define ERROR 0
# define SUCCESS 1

# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>
# include <pthread.h>
# include <unistd.h>
# include <string.h>
# include <stdbool.h>

typedef struct s_philo
{
	struct s_arg	*arg;
	pthread_t		thread;
	int				id;
	int				left;
	int				right;
	long long		last_eat_time;
	int				eat_count;
}				t_philo;

typedef struct s_arg
{
	int				philo_num;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				eat_times;
	bool			flag;
	int				finished_eat;
	long long		start_time;
	pthread_mutex_t	*forks;
}				t_arg;

int			ft_atoi(const char *str);
int			ft_strlen(const char *str);
int			ft_error(const char *str);

long long	get_time(void);
int			init_argument(t_arg *arg, char **argv);
int			init_philo(t_philo **philo, t_arg *arg);

void		philo_eating(t_arg *arg, t_philo *philo);
void		philo_printf(t_arg *arg, int id, char *msg);
void		philo_sleep_think(t_arg *arg, t_philo *philo);
void		moniter(t_arg *arg, t_philo *philo);
void		smart_timer(int time);

#endif