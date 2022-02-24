/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:50:40 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/09 14:51:41 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		temp = 0;
		while (to_find[temp] == str[i + temp])
		{
			if (to_find[temp + 1] == '\0')
				return (str + i);
			temp++;
		}
		i++;
	}
	return (0);
}
