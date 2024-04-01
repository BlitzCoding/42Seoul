/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:35:31 by yonghlee          #+#    #+#             */
/*   Updated: 2022/05/18 14:36:16 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_hexlower(unsigned int x)
{
	int	tmp;

	tmp = 0;
	if (x >= 16)
	{
		tmp += printf_hexlower(x / 16);
		tmp += printf_hexlower(x % 16);
	}
	else
	{
		if (x < 10)
			tmp += printf_char(x + '0');
		else
			tmp += printf_char(x + 'a' - 10);
	}
	return (tmp);
}

int	printf_hexupper(unsigned int x)
{
	int	tmp;

	tmp = 0;
	if (x >= 16)
	{
		tmp += printf_hexupper(x / 16);
		tmp += printf_hexupper(x % 16);
	}
	else
	{
		if (x < 10)
			tmp += printf_char(x + '0');
		else
			tmp += printf_char(x + 'A' - 10);
	}
	return (tmp);
}

int	printf_ptr(unsigned long long p)
{
	int	tmp;

	tmp = 0;
	if (p >= 16)
	{
		tmp += printf_ptr(p / 16);
		tmp += printf_ptr(p % 16);
	}
	if (p < 16)
	{
		if (p < 10)
			tmp += printf_char(p + 48);
		else
			tmp += printf_char(p + 87);
	}
	return (tmp);
}
