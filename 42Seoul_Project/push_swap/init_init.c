/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:50:00 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 18:15:43 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack *a, t_stack *b, t_info *info)
{
	int	i;

	i = 0;
	a->size = info->array_size;
	a->value = malloc(sizeof(int) * info->array_size);
	while (i < info->array_size)
	{
		a->value[i] = info->array[info->array_size - i - 1];
		i++;
	}
	b->size = 0;
	b->value = malloc(sizeof(int) * info->array_size);
}

void	print_error(void)
{
	write(1, "Error\n", 7);
	exit(0);
}
