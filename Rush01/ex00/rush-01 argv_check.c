/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:51:49 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/02/13 17:04:05 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	is_wrong_argv(char *argv)
{
	int	offset;

	offset = 0;
	while (offset < 31)
	{
		if (offset % 2 == 0)
		{
			 if (!('1' <= *(argv + offset) && *(argv + offset) <= '4'))
				 return (0);
		}
		else
		{
			if (*(argv + offset) != ' ')
				return (0);
		}
		offset++;
	}
	return (1);
}

int	argv_check(char *str)
{
	if (str_len(str) != 31)
		return (0);
	if (is_wrong_argv(str) == 0)
		return (0);
	return (1);
}
