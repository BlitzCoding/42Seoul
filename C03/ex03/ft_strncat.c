/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:49:17 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/09 14:50:03 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	temp;

	i = 0;
	temp = 0;
	while (dest[i])
		i++;
	while (src[temp] && temp < nb)
	{
		dest[i] = src[temp];
		temp++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
