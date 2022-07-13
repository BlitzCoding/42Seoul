/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_bonus_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:49:59 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 19:18:29 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bonus_s_a(t_stack *s)
{
	int	tmp;

	if (s->size == 0)
		return ;
	tmp = s->value[s->size - 1];
	s->value[s->size - 1] = s->value[s->size - 2];
	s->value[s->size - 2] = tmp;
}

void	bonus_s_b(t_stack *s)
{
	int	tmp;

	if (s->size == 0)
		return ;
	tmp = s->value[s->size - 1];
	s->value[s->size - 1] = s->value[s->size - 2];
	s->value[s->size - 2] = tmp;
}

void	bonus_s_s(t_stack *a, t_stack *b)
{
	if (a->size == 0 || b->size == 0)
		return ;
	bonus_s_a(a);
	bonus_s_b(b);
}
