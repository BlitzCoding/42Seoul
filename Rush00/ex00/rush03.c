/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 08:45:26 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/05 16:08:24 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	dx;
	int	dy;

	dy = 1;
	while (dy <= y && x > 0 && y > 0)
	{
		dx = 1;
		while (dx <= x)
		{
			if ((dx == 1 && dy == 1) || (dx == 1 && dy == y))
				ft_putchar('A');
			else if ((dx == x && dy == 1) || (dx == x && dy == y))
				ft_putchar('C');
			else if (dx == 1 || dx == x || dy == 1 || dy == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			dx++;
		}
		dy++;
		ft_putchar('\n');
	}
}
