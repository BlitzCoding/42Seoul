/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:11:53 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/21 18:20:34 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	make_str(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
		{
			*result = strs[i][j];
			result++;
		}
		j = -1;
		if (i != size - 1)
		{
			while (sep[++j])
			{
				*result = sep[j];
				result++;
			}
		}
	}
	*result = '\0';
}

int	make_malloc_size(int size, char **strs, char *sep)
{
	int	malloc_len;
	int	i;
	int	sep_len;

	sep_len = ft_strlen(sep);
	malloc_len = 0;
	i = 0;
	while (i < size)
	{
		malloc_len += ft_strlen(strs[i]);
		i++;
	}
	malloc_len += sep_len * (size - 1);
	malloc_len++;
	return (malloc_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		malloc_size;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	malloc_size = make_malloc_size(size, strs, sep);
	result = (char *)malloc(sizeof(char) + (malloc_size + 1));
	make_str(result, strs, sep, size);
	return (result);
}
