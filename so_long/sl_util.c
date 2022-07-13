/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:28:20 by yonghlee          #+#    #+#             */
/*   Updated: 2022/06/27 19:00:08 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*my_strdup(char *s, char c)
{
	char	*line;
	int		i;

	i = 0;
	line = malloc(ft_strlen(s));
	if (!line)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		line[i] = s[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

int	my_strlcpy(char *dst, char *src, int len)
{
	int	src_len;
	int	i;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (len == 0)
	{
		return (src_len);
	}
	while (i < len - 1 && *src && *src != '\n')
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '\0';
	return (src_len);
}

char	*my_strjoin(char *s1, char *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (my_strdup(s2, '\n'));
	else if (!s2)
		return (my_strdup(s1, '\n'));
	s1_len = my_strlen(s1);
	s2_len = my_strlen(s2);
	res = malloc(s1_len + s2_len + 1);
	if (!(res))
		return (NULL);
	my_strlcpy(res, s1, s1_len + 1);
	my_strlcpy(res + s1_len, s2, s2_len + 1);
	free(s1);
	free(s2);
	return (res);
}

size_t	my_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\n')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
