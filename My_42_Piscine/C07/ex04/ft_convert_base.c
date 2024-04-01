/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:50:02 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/21 13:53:54 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		get_len(int nbr, int size, int is_negative);
int		ft_iterate_power(int n, int p);
int		is_vaild(char *base);
char	*is_minus(char *str, int *is_negative);

char	*final_base(int nbr, char *base, char *res, int is_negative)
{
	int		i;
	int		size;

	i = 0;
	size = get_len(nbr, ft_strlen(base), is_negative);
	if (is_negative == -1)
		res[0] = '-';
	if (nbr == 0)
	{
		res[0] = base[0];
		res[1] = '\0';
	}
	while (nbr > 0)
	{
		res[(size - i - 1)] = base[nbr % ft_strlen(base)];
		i++;
		nbr /= ft_strlen(base);
	}
	return (res);
}

char	*ft_putnbr_base(int nbr, char *base_to, int is_negative)
{
	char		*result;
	int			base_len;
	int			len;

	base_len = ft_strlen(base_to);
	len = get_len(nbr, base_len, is_negative);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	return (final_base(nbr, base_to, result, is_negative));
}

char	*ft_atoi(char *str, char *base, int *is_negative, int *size)
{
	int	i;
	int	j;
	int	is_bool;

	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	str = is_minus(str, is_negative);
	while (*str)
	{
		j = -1;
		is_bool = 0;
		while (base[++j])
			if (*str == base[j])
				is_bool = 1;
		if (is_bool == 0)
			break ;
		str++;
		i++;
	}
	*size = i;
	return (str - i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	nb;
	int			is_negative;
	int			nbr_size;
	int			i;
	int			n;

	nb = 0;
	i = 0;
	nbr = ft_atoi(nbr, base_from, &is_negative, &nbr_size);
	if (is_vaild(base_from) == 0 || is_vaild(base_to) == 0)
		return (NULL);
	while (i < nbr_size)
	{
		n = 0;
		while (base_from[n] != nbr[i])
			n++;
		nb += n * ft_iterate_power(ft_strlen(base_from), (nbr_size - i - 1));
		i++;
	}
	return (ft_putnbr_base(nb, base_to, is_negative));
}
