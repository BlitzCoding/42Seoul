/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:13:36 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/03 15:23:35 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	my_ft_putchar(int num1, int num2)
{
	int	one_num;
	int	ten_num;

	one_num = num1 % 10;
	ten_num = num1 / 10;
	ft_putchar(ten_num + 48);
	ft_putchar(one_num + 48);
	write(1, " ", 1);
	one_num = num2 % 10;
	ten_num = num2 / 10;
	ft_putchar(ten_num + 48);
	ft_putchar(one_num + 48);
	if (num1 != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 < 99)
	{
		while (num2 < 100)
		{
			my_ft_putchar(num1, num2);
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}
