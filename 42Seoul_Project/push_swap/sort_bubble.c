/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bubble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:50:04 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 17:40:29 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	bubble_sort_array(int *num, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (num[i] > num[j])
				ft_swap(&num[i], &num[j]);
			j++;
		}
		i++;
	}
}

void	reset_pivot(t_stack *s)
{
	int	*num;
	int	i;

	num = malloc(sizeof(int) * s->size);
	i = 0;
	while (i < s->size)
	{
		num[i] = s->value[i];
		i++;
	}
	bubble_sort_array(num, s->size);
	free(num);
}

int	find_smallest(t_stack *s)
{
	int	res;
	int	i;

	res = INT_MAX;
	i = 0;
	while (i < s->size)
	{
		if (res > s->value[i])
			res = s->value[i];
		i++;
	}
	return (res);
}
