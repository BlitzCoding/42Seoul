/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:52:47 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/21 13:57:13 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int	min_num;
	int	i;

	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	min_num = min;
	i = 0;
	if (min >= max)
		return (NULL);
	while (i < len)
	{
		arr[i] = min_num;
		i++;
		min_num++;
	}
	return (arr);
}
