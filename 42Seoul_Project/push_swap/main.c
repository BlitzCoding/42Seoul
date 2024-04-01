/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:50:03 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/11 10:29:42 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/include/libft.h"

void	ready_push_swap(char **av, t_info *info)
{
	check_data(av, info);
	check_overlap(info);
	is_sort(info);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	t_info	info;

	(void)argc;
	ready_push_swap(argv, &info);
	init_stack(&stack_a, &stack_b, &info);
	if (stack_a.size <= 5)
	{
		sort_a(&stack_a, &stack_b);
		return (0);
	}
	do_push_swap(&stack_a, &stack_b);
}
