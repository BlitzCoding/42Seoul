/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:28:16 by yonghlee          #+#    #+#             */
/*   Updated: 2022/06/27 18:57:28 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	read_map(t_game *game, char *file)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	if (fd <= 0)
		print_error("Error : Failed Open Map\n");
	line = get_next_line(fd);
	game->width = ft_strlen(line) - 1;
	game->height = 0;
	game->read_line = my_strdup(line, '\n');
	free(line);
	while (line)
	{
		game->height++;
		line = get_next_line(fd);
		if (line)
		{
			if ((int)my_strlen(line) != game->width)
				print_error("Error : Map isn't Rectangle");
			game->read_line = my_strjoin(game->read_line, line);
		}
	}
	close(fd);
}

void	is_field(t_game *game)
{
	size_t	i;

	i = -1;
	while (++i < ft_strlen(game->read_line))
	{
		if ((int)i < game->width)
		{
			if (game->read_line[i] != '1')
				print_error("Error : Map isn't surround by tree");
		}
		else if (i % game->width == 0 || i % game->width == game->width - 1)
		{
			if (game->read_line[i] != '1')
				print_error("Error : Map isn't surround by tree");
		}
		else if (i > ft_strlen(game->read_line) - game->width)
		{
			if (game->read_line[i] != '1')
				print_error("Error : Map isn't surround by tree");
		}
	}
}

void	is_element(t_game *game)
{
	size_t	i;
	int		e_num;
	int		p_num;

	i = -1;
	e_num = 0;
	p_num = 0;
	while (++i < ft_strlen(game->read_line))
	{
		if (game->read_line[i] == 'E')
			e_num++;
		else if (game->read_line[i] == 'C')
		{
			game->all++;
		}
		else if (game->read_line[i] == 'P')
		{
			p_num++;
		}
	}
	if (game->all == 0 || e_num == 0 || p_num != 1)
		print_error("Error : Invaild Map type\n");
}

void	check_map(t_game *game)
{
	is_field(game);
	is_element(game);
}
