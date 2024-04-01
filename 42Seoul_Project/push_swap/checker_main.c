/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:38:20 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/11 10:51:56 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ready_push_swap(char **av, t_info *info)
{
	check_data(av, info);
	check_overlap(info);
}

int	is_sort_bonus(t_stack *a)
{
	int	i;

	i = -1;
	while (++i < a->size)
	{
		if (a->value[i] < a->value[i + 1])
			return (0);
	}
	return (1);
}

void	do_cmd(t_stack *a, t_stack *b, char *cmd)
{
	if (!ft_strncmp(cmd, "sa\n", 4))
		bonus_s_a(a);
	else if (!ft_strncmp(cmd, "sb\n", 4))
		bonus_s_b(b);
	else if (!ft_strncmp(cmd, "ss\n", 4))
		bonus_s_s(a, b);
	else if (!ft_strncmp(cmd, "pa\n", 4))
		bonus_p_a(a, b);
	else if (!ft_strncmp(cmd, "pb\n", 4))
		bonus_p_b(a, b);
	else if (!ft_strncmp(cmd, "ra\n", 4))
		bonus_r_a(a);
	else if (!ft_strncmp(cmd, "rb\n", 4))
		bonus_r_b(b);
	else if (!ft_strncmp(cmd, "rr\n", 4))
		bonus_r_r(a, b);
	else if (!ft_strncmp(cmd, "rra\n", 5))
		bonus_rr_a(a);
	else if (!ft_strncmp(cmd, "rrb\n", 5))
		bonus_rr_b(b);
	else if (!ft_strncmp(cmd, "rrr\n", 5))
		bonus_rr_r(a, b);
	else
		print_error();
}

void	do_checker(t_stack *a, t_stack *b)
{
	char	*cmd;

	while (1)
	{
		cmd = get_next_line(STDIN);
		if (!cmd)
			break ;
		do_cmd(a, b, cmd);
		free(cmd);
		cmd = NULL;
	}
	if (is_sort_bonus(a) == 1)
		write(1, "OK\n", 4);
	else if (is_sort_bonus(a) == 0)
		write(1, "KO\n", 4);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	t_info	info;

	(void)argc;
	ready_push_swap(argv, &info);
	init_stack(&stack_a, &stack_b, &info);
	do_checker(&stack_a, &stack_b);
}
