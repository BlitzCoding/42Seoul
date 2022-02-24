/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:32:08 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/14 21:18:10 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_atoi(char *str, int *is_negative)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			(*is_negative) *= -1;
		str++;
	}
	return (str);
}

int	is_bool(char *base, int size)
{
	int	i;
	int	j;

	i = 0;
	if (size <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	result_result(int j, int base_len)
{
	int	d;
	int	doub;
	int	result;

	d = -1;
	doub = 1;
	result = 0;
	if (j == 0)
		doub = 1;
	else
	{
		while (++d < j)
			doub *= base_len;
	}
	result += doub;
	return (result);
}

int	make_result(char *s, char *b, int sl, int bl)
{
	int	i;
	int	j;
	int	doub;
	int	temp_result;
	int	result;

	result = 0;
	doub = 1;
	i = -1;
	while (++i < sl)
	{
		j = -1;
		doub = 1;
		while (++j < bl)
		{
			if (s[i] == b[j])
			{
				temp_result = result_result(j, bl);
				result += temp_result;
			}
		}
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	is_negative;
	int	result;
	int	b_size;
	int	s_size;
	int	i;

	b_size = 0;
	s_size = 0;
	i = 0;
	while (base[i++])
		b_size++;
	i = 0;
	while (str[i++])
		s_size++;
	is_negative = 1;
	result = 0;
	if (!is_bool(base, b_size))
		return (0);
	str = ft_atoi(str, &is_negative);
	result = make_result(str, base, s_size, b_size);
	return (is_negative * result);
}
