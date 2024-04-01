/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:42:54 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/09 10:16:49 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_number(int *array, int n)
{
	int	i;
	int	is_bool;

	is_bool = 1;
	i = 1;
	while (i < n)
	{
		if (array[i - 1] >= array[i])
			is_bool = 0;
		i++;
	}
	if (!is_bool)
		return ;
	i = 0;
	while (i < n)
	{
		ft_putchar(array[i] + '0');
		i++;
	}
	if (array[0] != (10 - n))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	array[10];

	i = 0;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
	while (array[0] <= (10 - n))
	{
		print_number(array, n);
		array[n - 1]++;
		i = n;
		while (i > 1)
		{
			i--;
			if (array[i] > 9)
			{
				array[i - 1]++;
				array[i] = 0;
			}
		}
	}
}
