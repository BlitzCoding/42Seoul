/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_pass.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:49:57 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 15:14:23 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_a(t_stack *a, t_stack *b)
{
	int	tmp;

	tmp = b->value[b->size - 1];
	if (b->size == 0)
		return ;
	b->size--;
	a->size++;
	a->value[a->size - 1] = tmp;
	write(1, "pa\n", 3);
}

void	p_b(t_stack *a, t_stack *b)
{
	int	tmp;

	tmp = a->value[a->size - 1];
	if (a->size == 0)
		return ;
	a->size--;
	b->size++;
	b->value[b->size - 1] = tmp;
	write(1, "pb\n", 3);
}
