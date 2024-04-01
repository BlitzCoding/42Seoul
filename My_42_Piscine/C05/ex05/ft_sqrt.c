/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:31:45 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/16 17:49:10 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	pivot;

	pivot = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (pivot <= (nb / 2))
	{
		if (pivot > 46341)
			return (0);
		if (nb == pivot * pivot)
			return (pivot);
		pivot++;
	}
	return (0);
}
