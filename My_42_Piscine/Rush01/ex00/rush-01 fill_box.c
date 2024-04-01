/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjilee <eunjilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:21:57 by eunjilee          #+#    #+#             */
/*   Updated: 2022/02/13 20:34:16 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	final_check(int box[4][4], int cond[4][4]);

void	print_array(int array[4][4])
{
	int	i;
	int	c;

	i = 0;
	while (i < 16)
	{
		c = array[i / 4][i % 4] + '0';
		write(1, &c, 1);
		if (i % 4 != 3)
		{
			write(1, " ", 1);
		}
		else
		{
			write(1, "\n", 1);
		}
		i++;
	}
	return ;
}

int	duplicate_check(int box[4][4], int r, int c, int val)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (box[i][c] == val)
			return (1);
		i++;
	}
	j = 0;
	while (j < 4)
	{
		if (box[r][j] == val)
			return (1);
		j++;
	}
	return (0);
}

int	finish(int box[4][4], int cond[4][4])
{
	if (final_check(box, cond) == 1)
	{
		print_array(box);
		return (1);
	}
	return (0);
}

int	fill_box(int box[4][4], int flag[4][4], int cond[4][4], int idx)
{
	int	i;
	int	r;
	int	c;

	r = idx / 4;
	c = idx % 4;
	if (idx == 16)
		return (finish(box, cond));
	if (flag[r][c] == 1)
		return (fill_box(box, flag, cond, idx + 1));
	else
	{
		i = 0;
		while (++i <= 4)
		{
			if (duplicate_check(box, r, c, i) == 1)
				continue ;
			box[r][c] = i;
			if (fill_box(box, flag, cond, idx + 1) == 1)
				return (1);
			box[r][c] = 0;
		}
	}
	return (0);
}
