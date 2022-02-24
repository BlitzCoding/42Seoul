/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:41:06 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/02/13 20:41:09 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fix_flag(int box[4][4], int flag[4][4], int cond[4][4]);
void	fix_flag2(int box[4][4], int flag[4][4], int cond[4][4]);
int		fill_box(int box[4][4], int flag[4][4], int cond[4][4], int idx);
void	init_array(int array[4][4]);

void	rush01(int cond[4][4])
{
	int	box[4][4];
	int	flag[4][4];

	init_array(box);
	init_array(flag);
	fix_flag(box, flag, cond);
	fix_flag2(box, flag, cond);
	fill_box(box, flag, cond, 0);
	return ;
}
