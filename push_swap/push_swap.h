/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:48:40 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/12 07:50:05 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
/* ------------------------------
|             include
--------------------------------*/
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include "./libft/include/libft.h"
/* ------------------------------
|             define
--------------------------------*/
# define UP 1
# define DOWN 0
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define STDIN 0
/* ------------------------------
|             struct
--------------------------------*/
typedef struct s_stack
{
	int	*value;
	int	size;
}	t_stack;

typedef struct s_info
{
	int	*array;
	int	array_size;
	int	*result;
}	t_info;

void	print_error(void);
/* ------------------------------
|          init_parsing
--------------------------------*/
void	is_sort(t_info *info);
void	check_overlap(t_info *info);
void	init_info(char **av, t_info *info);
void	check_num(char *str);
void	check_data(char **av, t_info *info);
/* ------------------------------
|          init_init
--------------------------------*/
void	init_stack(t_stack *a, t_stack *b, t_info *info);
/* ------------------------------
|          sort_bubble
--------------------------------*/
void	ft_swap(int *a, int *b);
void	reset_pivot(t_stack *s);
void	bubble_sort_array(int *num, int size);
int		find_smallest(t_stack *s);
/* ------------------------------
|          A_sort_less_six
--------------------------------*/
bool	is_stack_sort(t_stack *s);
void	a_sort_two(t_stack *s);
void	a_sort_three(t_stack *s);
void	a_sort_four(t_stack *a, t_stack *b);
void	a_sort_five(t_stack *a, t_stack *b);

/* ------------------------------
|            algorithm
--------------------------------*/
void	a_to_b(t_stack *a, t_stack *b, int chunk);
void	do_push_swap(t_stack *a, t_stack *b);
int		search_idx(t_stack *b, int n);
void	b_to_a(t_stack *a, t_stack *b);
/* ------------------------------
|         algorithm_util
--------------------------------*/
void	make_sand(t_stack *a, t_stack *b, int *arr, int chunk);
int		*make_sorted(t_stack *s, int r);
bool	up_and_down(t_stack *b, int pivot);
void	boom_case(t_stack *a, t_stack *b, int *arr, int chunk);
bool	is_boom(t_stack *a);
/* ------------------------------
|          sort_utils
--------------------------------*/
int		five_pivot(t_stack *s);
void	free_all(char **str);
void	sort_a(t_stack *a, t_stack *b);
/* ------------------------------
|             cmd
--------------------------------*/
void	s_a(t_stack *s);
void	s_b(t_stack *s);
void	s_s(t_stack *a, t_stack *b);
void	p_a(t_stack *a, t_stack *b);
void	p_b(t_stack *a, t_stack *b);
void	r_a(t_stack *s);
void	r_b(t_stack *s);
void	r_r(t_stack *a, t_stack *b);
void	rr_a(t_stack *s);
void	rr_b(t_stack *s);
void	rr_r(t_stack *a, t_stack *b);
void	bonus_s_a(t_stack *s);
void	bonus_s_b(t_stack *s);
void	bonus_s_s(t_stack *a, t_stack *b);
void	bonus_p_a(t_stack *a, t_stack *b);
void	bonus_p_b(t_stack *a, t_stack *b);
void	bonus_r_a(t_stack *s);
void	bonus_r_b(t_stack *s);
void	bonus_r_r(t_stack *a, t_stack *b);
void	bonus_rr_a(t_stack *s);
void	bonus_rr_b(t_stack *s);
void	bonus_rr_r(t_stack *a, t_stack *b);
/* ------------------------------
|             macro
--------------------------------*/
void	pb_sort_pa(t_stack *a, t_stack *b);
void	double_pa(t_stack *a, t_stack *b);
void	pb_rb_idx(t_stack *a, t_stack *b, int *idx);
void	pb_idx(t_stack *a, t_stack *b, int *idx);

#endif