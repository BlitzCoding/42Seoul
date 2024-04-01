/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:28:13 by yonghlee          #+#    #+#             */
/*   Updated: 2022/06/28 16:02:26 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	end(t_game *game)
{
	game->count++;
	printf("your move count : %d", game->count);
	mlx_destroy_window(game->mlx, game->win);
	exit(0);
}

void	move_w(t_game *game)
{
	size_t	i;

	i = -1;
	while (++i < ft_strlen(game->read_line))
	{
		if (game->read_line[i] == 'P')
			break ;
	}
	if (game->read_line[i - game->width] == 'C')
		game->col_num++;
	if (game->read_line[i - game->width] == 'E' && \
			game -> col_num == game -> all)
		end(game);
	else if (game->read_line[i - game->width] != '1' && \
				game->read_line[i - game->width] != 'E')
	{
		game->read_line[i] = '0';
		game->read_line[i - game->width] = 'P';
		game->count++;
		printf("%d\n", game->count);
		put_image(game, 0, -1);
	}
}

void	move_a(t_game *game)
{
	size_t	i;

	i = -1;
	while (++i < ft_strlen(game->read_line))
	{
		if (game->read_line[i] == 'P')
			break ;
	}
	if (game->read_line[i - 1] == 'C')
		game->col_num++;
	if (game->read_line[i - 1] == 'E' && game -> col_num == game -> all)
		end(game);
	else if (game->read_line[i - 1] != '1' && game->read_line[i - 1] != 'E')
	{
		game->read_line[i] = '0';
		game->read_line[i - 1] = 'P';
		game->count++;
		printf("%d\n", game->count);
		put_image(game, 0, -1);
	}
}

void	move_s(t_game *game)
{
	size_t	i;

	i = -1;
	while (++i < ft_strlen(game->read_line))
	{
		if (game->read_line[i] == 'P')
			break ;
	}
	if (game->read_line[i + game->width] == 'C')
		game->col_num++;
	if (game->read_line[i + game->width] == 'E' && \
			game -> col_num == game -> all)
		end(game);
	else if (game->read_line[i + game->width] != '1' \
				&& game->read_line[i + game->width] != 'E')
	{
		game->read_line[i] = '0';
		game->read_line[i + game->width] = 'P';
		game->count++;
		printf("%d\n", game->count);
		put_image(game, 0, -1);
	}
}

void	move_d(t_game *game)
{
	size_t	i;

	i = -1;
	while (++i < ft_strlen(game->read_line))
	{
		if (game->read_line[i] == 'P')
			break ;
	}
	if (game->read_line[i + 1] == 'C')
		game->col_num++;
	if (game->read_line[i + 1] == 'E' && game -> col_num == game -> all)
		end(game);
	else if (game->read_line[i + 1] != '1' && game->read_line[i + 1] != 'E')
	{
		game->read_line[i] = '0';
		game->read_line[i + 1] = 'P';
		game->count++;
		printf("%d\n", game->count);
		put_image(game, 0, -1);
	}
}
