/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:48:10 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/09 14:49:00 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[temp])
	{
		dest[i] = src[temp];
		i++;
		temp++;
	}
	dest[i] = '\0';
	return (dest);
}
