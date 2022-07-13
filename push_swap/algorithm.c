/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:49:56 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 19:47:36 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_to_a(t_stack *a, t_stack *b)
{
	int	*tmp_arr;
	int	tmp;
	int	top;

	if (b->size == 0)
		return ;
	top = b->size;
	tmp_arr = make_sorted(b, top);
	tmp = up_and_down(b, tmp_arr[b->size - 1]);
	if (tmp == UP)
	{
		while (b->value[b->size - 1] != tmp_arr[b->size - 1])
			r_b(b);
	}
	else
	{
		while (b->value[b->size - 1] != tmp_arr[b->size - 1])
			rr_b(b);
	}
	p_a(a, b);
	free(tmp_arr);
	b_to_a(a, b);
}

void	a_to_b(t_stack *a, t_stack *b, int chunk)
{
	int	*tmp_arr;

	if (a->size < 3)
	{
		while (a->size != 0)
			p_b(a, b);
		return ;
	}
	tmp_arr = make_sorted(a, a->size);
	make_sand(a, b, tmp_arr, chunk);
	free(tmp_arr);
	a_to_b(a, b, chunk);
}

void	do_push_swap(t_stack *a, t_stack *b)
{
	int	chunk;

	if (a->size <= 100)
		chunk = (a->size * 3) / 20;
	else if (a->size <= 500)
		chunk = a->size / 20 + a->size / 50;
	else
		chunk = a->size / 40;
	a_to_b(a, b, chunk);
	b_to_a(a, b);
}
