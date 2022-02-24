/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:34:31 by yonghlee          #+#    #+#             */
/*   Updated: 2022/02/17 08:11:18 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper_alpha(char c)
{	
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_lower_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_bool;

	i = 0;
	is_bool = 1;
	while (str[i])
	{
		if (is_numeric(str[i]) || is_lower_alpha(str[i])
			|| is_upper_alpha(str[i]))
		{
			if (is_bool == 1 && is_lower_alpha(str[i]))
				str[i] = str[i] - 32;
			else if (is_bool == 0 && is_upper_alpha(str[i]))
				str[i] = str[i] + 32;
			is_bool = 0;
		}
		else
			is_bool = 1;
		i++;
	}
	return (str);
}
