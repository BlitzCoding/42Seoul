/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_bonus_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:49:58 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 19:18:06 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bonus_r_a(t_stack *s)
{
	int	tmp;
	int	i;

	i = (s->size - 1);
	if (i < 2)
		return ;
	while (i > 0)
	{
		tmp = s->value[i];
		s->value[i] = s->value[i - 1];
		s->value[i - 1] = tmp;
		i--;
	}
}

void	bonus_r_b(t_stack *s)
{
	int	tmp;
	int	i;

	i = (s->size - 1);
	if (i < 2)
		return ;
	while (i > 0)
	{
		tmp = s->value[i];
		s->value[i] = s->value[i - 1];
		s->value[i - 1] = tmp;
		i--;
	}
}

void	bonus_r_r(t_stack *a, t_stack *b)
{
	if (a->size < 2 || b->size < 2)
		return ;
	bonus_r_a(a);
	bonus_r_b(b);
}
