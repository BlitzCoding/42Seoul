/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 12:21:28 by yonghlee          #+#    #+#             */
/*   Updated: 2022/06/27 19:01:38 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "get_next_line.h"

int	press_key(int key_code, t_game *game)
{
	if (key_code == KEY_ESC)
		exit_game(game);
	if (key_code == KEY_W)
		move_w(game);
	if (key_code == KEY_A)
		move_a(game);
	if (key_code == KEY_S)
		move_s(game);
	if (key_code == KEY_D)
		move_d(game);
	return (0);
}

void	init_game(t_game *game, char *file)
{
	game->all = 0;
	read_map(game, file);
	check_map(game);
	game->mlx = mlx_init();
	game->count = 0;
	game->col_num = 0;
	game->win = mlx_new_window(game->mlx, game->width * 64, \
					game->height * 64, "so_long");
	game->img = setting_img(game->mlx);
	put_image(game, 0, -1);
}

int	exit_game(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		print_error("Error : Need map file ex) ./so_long ./map/*.ber");
	init_game(&game, argv[1]);
	mlx_hook(game.win, X_EVENT_KEY_PRESS, 0, &press_key, &game);
	mlx_hook(game.win, X_EVENT_KEY_EXIT, 0, &exit_game, &game);
	mlx_loop(game.mlx);
}
