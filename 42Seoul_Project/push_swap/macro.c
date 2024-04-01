/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:50:02 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 19:31:24 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_sort_pa(t_stack *a, t_stack *b)
{
	p_b(a, b);
	a_sort_three(a);
	p_a(a, b);
}

void	double_pa(t_stack *a, t_stack *b)
{
	p_a(a, b);
	p_a(a, b);
}

void	pb_rb_idx(t_stack *a, t_stack *b, int *idx)
{
	p_b(a, b);
	r_b(b);
	*idx += 1;
}

void	pb_idx(t_stack *a, t_stack *b, int *idx)
{
	p_b(a, b);
	*idx += 1;
}

void	sort_a(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		a_sort_two(a);
	else if (a->size == 3)
		a_sort_three(a);
	else if (a->size == 4)
		a_sort_four(a, b);
	else if (a->size == 5)
		a_sort_five(a, b);
}
