/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:28:10 by yonghlee          #+#    #+#             */
/*   Updated: 2022/06/27 18:50:07 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_image(t_game *game, int x, int y)
{
	while (++y < game->height)
	{
		x = -1;
		while (++x < game->width)
		{
			if (game->read_line[y * game->width + x] == '1')
				mlx_put_image_to_window(game->mlx, \
					game->win, game->img.tree, x * 64, y * 64);
			else if (game->read_line[y * game->width + x] == 'C')
				mlx_put_image_to_window(game->mlx, \
					game->win, game->img.item, x * 64, y * 64);
			else if (game->read_line[y * game->width + x] == 'P')
				mlx_put_image_to_window(game->mlx, \
					game->win, game->img.player, x * 64, y * 64);
			else if (game->read_line[y * game->width + x] == 'E')
				mlx_put_image_to_window(game->mlx, \
					game->win, game->img.door, x * 64, y * 64);
			else
				mlx_put_image_to_window(game->mlx, \
					game->win, game->img.field, x * 64, y * 64);
		}
	}
}

t_img	setting_img(void *mlx)
{
	t_img	img;
	int		x;
	int		y;

	img.player = mlx_xpm_file_to_image(mlx, "./xpm/player.xpm", &x, &y);
	img.field = mlx_xpm_file_to_image(mlx, "./xpm/field.xpm", &x, &y);
	img.item = mlx_xpm_file_to_image(mlx, "./xpm/item.xpm", &x, &y);
	img.door = mlx_xpm_file_to_image(mlx, "./xpm/stone.xpm", &x, &y);
	img.tree = mlx_xpm_file_to_image(mlx, "./xpm/tree.xpm", &x, &y);
	return (img);
}
