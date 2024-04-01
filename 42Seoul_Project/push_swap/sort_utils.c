/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:16:14 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 19:31:26 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	five_pivot(t_stack *s)
{
	int	i;
	int	*num;
	int	pivot;

	num = malloc(sizeof(int) * 5);
	i = -1;
	while (++i < 5)
		num[i] = s->value[i];
	bubble_sort_array(num, 5);
	pivot = num[2];
	free(num);
	return (pivot);
}

void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

bool	is_stack_sort(t_stack *s)
{
	int	i;

	i = -1;
	while (++i < s->size)
	{
		if (s->value[i] < s->value[i + 1])
			return (false);
	}
	return (true);
}
