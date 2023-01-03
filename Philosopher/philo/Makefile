# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 11:20:32 by yonghlee          #+#    #+#              #
#    Updated: 2022/09/12 16:09:58 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc
CFLAG		= -Wall -Wextra -Werror
RM			= rm -rf

NAME		= philo

SRCS			= init.c		\
				libft.c		\
				main.c		\
				philo.c		\

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -o $@ $^
	
%.o : %.c
	$(CC) $(CFLAG) -c $^ -I./ -o $@

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
	
re : fclean all