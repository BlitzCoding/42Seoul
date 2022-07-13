/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_bonus_rreverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:27:40 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 19:18:18 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bonus_rr_a(t_stack *s)
{
	int	tmp;
	int	i;

	i = 0;
	if (s->size < 2)
		return ;
	while (i < (s->size - 1))
	{
		tmp = s->value[i];
		s->value[i] = s->value[i + 1];
		s->value[i + 1] = tmp;
		i++;
	}
}

void	bonus_rr_b(t_stack *s)
{
	int	tmp;
	int	i;

	i = 0;
	if (s->size < 2)
		return ;
	while (i < (s->size - 1))
	{
		tmp = s->value[i];
		s->value[i] = s->value[i + 1];
		s->value[i + 1] = tmp;
		i++;
	}
}

void	bonus_rr_r(t_stack *a, t_stack *b)
{
	if (a->size < 2 || b->size < 2)
		return ;
	bonus_rr_a(a);
	bonus_rr_b(b);
}
