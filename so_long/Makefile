# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 10:24:53 by yonghlee          #+#    #+#              #
#    Updated: 2022/06/28 10:24:56 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= so_long

SRCS 	= so_long.c		\
			sl_util.c \
			read_map.c \
			key.c		\
			image.c		\
			error.c		\
			get_next_line.c \
			get_next_line_utils.c \

OBJS 	= $(SRCS:%.c=%.o)
CFLAGS 	= -Wall -Wextra -Werror
MLX  	= -lmlx -framework Appkit -framework OpenGL

all		: $(NAME)

$(NAME)	: $(OBJS)
	cc -o $(NAME) $(OBJS) $(MLX)

%.o		: %.c
	cc $(CFLAGS) -c $^ -o $@

clean	: 
	rm -rf $(OBJS)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all
