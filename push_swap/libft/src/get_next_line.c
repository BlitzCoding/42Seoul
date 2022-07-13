/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:00:54 by yonghlee          #+#    #+#             */
/*   Updated: 2022/07/10 19:13:08 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char	*make_line(char *s, int index)
{
	char	*line;
	int		i;

	if (s[0] == '\0')
		return (NULL);
	if (index < 0)
	{
		line = malloc(sizeof(char) * (ft_get_strlen(s) + 1));
		i = -1;
		while (s[++i])
			line[i] = s[i];
		line[i] = '\0';
		return (line);
	}
	line = malloc(sizeof(char) * (index + 2));
	if (!line)
		return (NULL);
	line[index + 1] = '\0';
	while (index > -1)
	{
		line[index] = s[index];
		index--;
	}
	return (line);
}

static char	*save(char *s, int index)
{
	char	*line;
	int		i;

	if (index < 0)
	{
		free(s);
		return (0);
	}
	i = 0;
	if (s[index + 1] == 0)
	{
		free(s);
		return (0);
	}
	line = malloc(sizeof(char) * (ft_get_strlen(s) - index));
	while (s[index + i + 1])
	{
		line[i] = s[index + i + 1];
		i++;
	}
	line[i] = '\0';
	free(s);
	return (line);
}

static char	*get_temp(int fd, char *tmp)
{
	char	*buffer;
	int		read_len;

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	read_len = 1;
	while (read_len > 0 && newline_idx(tmp) == -1)
	{
		read_len = read(fd, buffer, BUFFER_SIZE);
		if (read_len == -1 || (tmp == NULL && read_len == 0))
		{
			free (buffer);
			return (NULL);
		}
		buffer[read_len] = '\0';
		tmp = ft_get_strjoin(tmp, buffer);
	}
	free(buffer);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*tmp[256];
	char		*line;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	tmp[fd] = get_temp(fd, tmp[fd]);
	if (!tmp[fd])
		return (NULL);
	line = make_line(tmp[fd], newline_idx(tmp[fd]));
	tmp[fd] = save(tmp[fd], newline_idx(tmp[fd]));
	return (line);
}
