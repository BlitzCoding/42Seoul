/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:49:55 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/12 08:03:21 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	up_and_down(t_stack *b, int pivot)
{
	int	i;

	i = -1;
	while (++i < b->size)
	{
		if (b->value[i] == pivot)
			break ;
	}
	if (i > b->size / 2)
		return (UP);
	return (DOWN);
}

int	*make_sorted(t_stack *s, int idx)
{
	int	*tmp;
	int	i;

	tmp = malloc(sizeof(int) * idx);
	if (!tmp)
		return (NULL);
	i = -1;
	while (++i < idx)
		tmp[i] = s->value[s->size - i - 1];
	bubble_sort_array(tmp, idx);
	return (tmp);
}

bool	is_boom(t_stack *a)
{
	int	count;
	int	i;
	int	top;

	top = a->size - 1;
	i = -1;
	count = 0;
	while (++i < a->size)
	{
		if (a->value[top - i] - 2 == a->value[top - i - 1])
			count++;
	}
	if (count > a->size / 3)
		return (true);
	return (false);
}

void	boom_case(t_stack *a, t_stack *b, int *arr, int chunk)
{
	int		tmp;
	int		idx;

	idx = 0;
	tmp = a->size;
	while (tmp-- > 0)
	{
		if (a->value[a->size - 1] <= arr[idx])
			pb_idx(a, b, &idx);
		else if (a->value[a->size - 1] > arr[idx]
			&& a->value[a->size - 1] <= arr[idx + chunk])
			pb_rb_idx(a, b, &idx);
		else if (a->value[a->size - 1] > arr[idx + chunk])
		{
			if (idx < a->size / 2)
				rr_a(a);
			else
				r_a(a);
		}
	}
}

void	make_sand(t_stack *a, t_stack *b, int *arr, int chunk)
{
	int		tmp;
	int		idx;
	bool	boom;

	boom = is_boom(a);
	if (boom && a->size > chunk * 5)
	{
		boom_case(a, b, arr, chunk);
		return ;
	}
	idx = 0;
	tmp = a->size;
	while (tmp-- > 0)
	{
		if (a->value[a->size - 1] <= arr[idx])
			pb_idx(a, b, &idx);
		else if (a->value[a->size - 1] > arr[idx]
			&& a->value[a->size - 1] <= arr[idx + chunk])
			pb_rb_idx(a, b, &idx);
		else
			r_a(a);
	}
}
