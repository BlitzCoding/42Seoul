/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:27:08 by yonghlee          #+#    #+#             */
/*   Updated: 2022/06/28 16:03:06 by yonghlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/*-------------------------------------
|            define status
--------------------------------------*/
# define X_EVENT_KEY_PRESS			2
# define X_EVENT_KEY_RELEASE		3
# define X_EVENT_KEY_EXIT			17

# define KEY_ESC		53
# define KEY_W			13
# define KEY_A			0
# define KEY_S			1
# define KEY_D			2

/*-------------------------------------
|                mlx.h
--------------------------------------*/
# include "./mlx/mlx.h"
# include "get_next_line.h"

/*-------------------------------------
|                library
--------------------------------------*/
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_img
{
	void	*field;
	void	*tree;
	void	*player;
	void	*item;
	void	*door;
}	t_img;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	int		height;
	int		width;
	int		count;
	int		col_num;
	int		all;
	char	*read_line;
	int		flag;
	t_img	img;
}	t_game;

/*-------------------------------------
|               so_long.c
--------------------------------------*/
int		press_key(int key_code, t_game *game);
void	init_game(t_game *game, char *file);
int		exit_game(t_game *game);

/*-------------------------------------
|               sl_util.c
--------------------------------------*/
size_t	ft_strlen(const char *s);
char	*my_strdup(char *s, char c);
int		my_strlcpy(char *dst, char *src, int len);
char	*my_strjoin(char *s1, char *s2);
size_t	my_strlen(const char *s);

/*-------------------------------------
|                error.c
--------------------------------------*/
void	ft_putstr_fd(char *s, int fd);
void	print_error(char *mes);

/*-------------------------------------
|               read_map.c
--------------------------------------*/

void	read_map(t_game *game, char *file);
void	is_field(t_game *game);
void	is_element(t_game *game);
void	check_map(t_game *game);

/*-------------------------------------
|               image.c
--------------------------------------*/
t_img	setting_img(void *mlx);
void	put_image(t_game *game, int x, int y);

/*-------------------------------------
|               key.c
--------------------------------------*/
int		press_key(int key_code, t_game *game);
void	end(t_game *game);
void	move_w(t_game *game);
void	move_a(t_game *game);
void	move_s(t_game *game);
void	move_d(t_game *game);

#endif
