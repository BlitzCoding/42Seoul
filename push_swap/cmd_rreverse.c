/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rreverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:27:40 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 15:28:12 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_a(t_stack *s)
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
	write(1, "rra\n", 4);
}

void	rr_b(t_stack *s)
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
	write(1, "rrb\n", 4);
}

void	rr_r(t_stack *a, t_stack *b)
{
	if (a->size < 2 || b->size < 2)
		return ;
	rr_a(a);
	rr_b(b);
	write(1, "rrr\n", 4);
}
