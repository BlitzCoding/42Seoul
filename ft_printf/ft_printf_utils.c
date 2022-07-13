/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:33:12 by yonghlee          #+#    #+#             */
/*   Updated: 2022/05/18 15:03:07 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	printf_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	printf_nbr(int nbr)
{
	long long	n;
	int			tmp;

	n = nbr;
	tmp = 0;
	if (n < 0)
	{
		n = n * -1;
		tmp += printf_char('-');
	}
	if (n >= 10)
	{
		tmp += printf_nbr(n / 10);
		tmp += printf_nbr(n % 10);
	}
	else
		tmp += printf_char(n + '0');
	return (tmp);
}

int	printf_usdnbr(unsigned int u)
{
	int	tmp;

	tmp = 0;
	if (u >= 10)
	{
		tmp += printf_usdnbr(u / 10);
		tmp += printf_usdnbr(u % 10);
	}
	else
		tmp += printf_char(u + '0');
	return (tmp);
}
