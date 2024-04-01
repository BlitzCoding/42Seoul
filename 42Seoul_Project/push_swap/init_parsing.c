/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:50:01 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 17:17:52 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_sort(t_info *info)
{
	int	i;

	i = -1;
	while (++i < info->array_size - 1)
	{
		if (info->array[i] > info->array[i + 1])
			return ;
	}
	exit(0);
}

void	check_overlap(t_info *info)
{
	int	i;
	int	j;

	i = -1;
	while (++i < info->array_size)
	{
		j = i;
		while (++j < info->array_size)
		{
			if (info->array[i] == info->array[j])
				print_error();
		}
	}
}

void	init_info(char **av, t_info *info)
{
	int		i;
	int		j;
	int		idx;
	char	**tmp;

	idx = 0;
	i = 0;
	while (av[++i])
	{
		j = -1;
		tmp = ft_split(av[i], ' ');
		while (tmp[++j])
		{
			info->array[idx] = ft_atoi(tmp[j]);
			idx++;
		}
		free_all(tmp);
	}
}

void	check_num(char *str)
{
	long long	num;
	int			i;

	if (str[0] == '-' || str[0] == '+')
		i = 0;
	else
		i = -1;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			print_error();
	}
	num = ft_atoi(str);
	if (num > INT_MAX || num < INT_MIN)
		print_error();
}

void	check_data(char **av, t_info *info)
{
	int		i;
	int		j;
	char	**tmp;

	info->array_size = 0;
	i = 0;
	while (av[++i])
	{
		j = -1;
		tmp = ft_split(av[i], ' ');
		if (!tmp[0])
			print_error();
		while (tmp[++j])
		{
			check_num(tmp[j]);
			info->array_size++;
		}
		free_all(tmp);
	}
	info->array = malloc(sizeof(int) * info->array_size);
	init_info(av, info);
}
