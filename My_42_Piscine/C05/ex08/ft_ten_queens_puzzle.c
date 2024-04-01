/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:11:33 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/15 12:18:03 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	queen(char *chess, int col, int *result)
{
	int	i;
	int	b;

	if (col == 10)
	{
		col = -1;
		while (++col < 10)
			ft_putchar(chess[col] + '0');
		ft_putchar('\n');
		(*result)++;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		b = 0;
		while (b < col && i != chess[b] && ft_abs(chess[b] - i) != col - b)
			b++;
		if (b >= col)
		{
			chess[col] = i;
			queen(chess, col + 1, result);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	chess[10];
	int		count;

	count = 0;
	queen(chess, 0, &count);
	return (count);
}
