/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_sort_less_six.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:49:54 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 19:25:56 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_sort_two(t_stack *s)
{
	if (is_stack_sort(s))
		return ;
	else
		s_a(s);
}

void	a_sort_three(t_stack *s)
{
	if (is_stack_sort(s))
		return ;
	if (s->value[2] < s->value[0] && s->value[0] < s->value[1])
	{
		s_a(s);
		r_a(s);
	}
	else if (s->value[1] < s->value[2] && s->value[2] < s->value[0])
		s_a(s);
	else if (s->value[0] < s->value[2] && s->value[2] < s->value[1])
		rr_a(s);
	else if (s->value[1] < s->value[0] && s->value[0] < s->value[2])
		r_a(s);
	else if (s->value[0] < s->value[1] && s->value[1] < s->value[2])
	{
		s_a(s);
		rr_a(s);
	}
}

void	a_sort_four(t_stack *a, t_stack *b)
{
	int	pivot;

	pivot = find_smallest(a);
	if (is_stack_sort(a))
		return ;
	if (a->value[0] == pivot)
	{
		rr_a(a);
		pb_sort_pa(a, b);
	}
	else if (a->value[1] == pivot)
	{
		rr_a(a);
		rr_a(a);
		pb_sort_pa(a, b);
	}
	else if (a->value[2] == pivot)
	{
		s_a(a);
		pb_sort_pa(a, b);
	}
	else if (a->value[3] == pivot)
		pb_sort_pa(a, b);
}

void	a_sort_five(t_stack *a, t_stack *b)
{
	int	pivot;
	int	i;

	i = 0;
	pivot = five_pivot(a);
	if (is_stack_sort(a))
		return ;
	while (i < 5)
	{
		if (a->value[a->size - 1] < pivot)
			p_b(a, b);
		else
			r_a(a);
		i++;
	}
	a_sort_three(a);
	if (b->value[0] > b->value[1])
	{
		double_pa(a, b);
		s_a(a);
	}
	else
		double_pa(a, b);
}
