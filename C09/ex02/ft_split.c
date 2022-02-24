/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:36:23 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/20 13:52:49 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_same(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	charset_count(char *str, char *charset)
{
	int	i;
	int	flag;
	int	count;

	count = 0;
	flag = 1;
	i = 0;
	while (str[i])
	{
		if ((flag == 1) && (!is_same(str[i], charset)))
		{
			count++;
			flag = 0;
		}
		else if (is_same(str[i], charset))
			flag = 1;
		i++;
	}
	return (count);
}

void	push_malloc(char *str, char *dest, char *copy)
{
	while (copy < str)
	{
		*dest = *copy;
		dest++;
		copy++;
	}
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	*copy;
	int		res_idx;

	res_idx = 0;
	result = malloc (sizeof(char *) * (charset_count(str, charset) + 1));
	if (!str && !charset)
	{
		result[0] = 0;
		return (result);
	}
	while (*str)
	{
		if (!is_same(*str, charset))
		{
			copy = str;
			while (*str && !is_same(*str, charset))
				str++;
			result[res_idx] = malloc (sizeof(char *) * (str - copy) + 1);
			push_malloc(str, result[res_idx++], copy);
		}
		str++;
	}
	result[res_idx] = 0;
	return (result);
}
