/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:47:01 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/16 16:32:55 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*cpy_str;
	int		i;
	int		str_size;

	i = 0;
	str_size = ft_strlen(str);
	cpy_str = malloc(sizeof(char) * (str_size + 1));
	while (str[i])
	{
		cpy_str[i] = str[i];
		i++;
	}
	cpy_str[i] = '\0';
	return (cpy_str);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = malloc(sizeof(t_stock_str) * (argc + 1));
	if (!arr)
		return (NULL);
	while (i < argc)
	{
		arr[i].size = ft_strlen(argv[i]);
		arr[i].str = argv[i];
		arr[i].copy = ft_strdup(argv[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
