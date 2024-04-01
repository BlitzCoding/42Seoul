/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:49:59 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 15:09:21 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_a(t_stack *s)
{
	int	tmp;

	if (s->size == 0)
		return ;
	tmp = s->value[s->size - 1];
	s->value[s->size - 1] = s->value[s->size - 2];
	s->value[s->size - 2] = tmp;
	write(1, "sa\n", 3);
}

void	s_b(t_stack *s)
{
	int	tmp;

	if (s->size == 0)
		return ;
	tmp = s->value[s->size - 1];
	s->value[s->size - 1] = s->value[s->size - 2];
	s->value[s->size - 2] = tmp;
	write(1, "sb\n", 3);
}

void	s_s(t_stack *a, t_stack *b)
{
	if (a->size == 0 || b->size == 0)
		return ;
	s_a(a);
	s_b(b);
	write(1, "ss\n", 3);
}
