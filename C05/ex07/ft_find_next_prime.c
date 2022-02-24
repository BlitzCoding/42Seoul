/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:22:56 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/15 19:08:31 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	while (n <= (nb / n))
	{
		if ((nb % n) == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 3)
		return (2);
	i = nb;
	while (ft_is_prime(i) == 0)
	{
		i++;
	}
	return (i);
}
