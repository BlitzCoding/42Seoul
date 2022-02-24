/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 09:19:59 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/06 09:59:25 by yonghlee         ###   ########.fr       */
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
			if ((dx != 1 && dx != x) && (dy == 1 || dy == y))
				ft_putchar('-');
			else if ((dx == 1 || dx == x) && (dy != 1 && dy != y))
				ft_putchar('|');
			else if (dx == 1 || dy == 1 || dx == 1 || dy == y)
				ft_putchar('o');
			else
				ft_putchar(' ');
			dx++;
		}
		dy++;
		ft_putchar('\n');
	}
}
