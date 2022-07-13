# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/10 14:50:07 by yonghlee          #+#    #+#              #
#    Updated: 2022/07/11 09:08:43 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_MANDATORY	= push_swap
NAME_BONUS		= checker
LIBFT			= libft

SRC			= main					\
				cmd_pass			\
				cmd_reverse			\
				cmd_swap			\
				cmd_rreverse		\
				algorithm			\
				algorithm_util		\
				sort_bubble			\
				init_parsing		\
				init_init			\
				A_sort_less_six		\
				sort_utils			\
				macro				\

SRC_BONUS = checker_main			\
				cmd_bonus_pass		\
				cmd_bonus_reverse	\
				cmd_bonus_swap		\
				cmd_bonus_rreverse	\
				sort_bubble			\
				init_parsing		\
				init_init			\
				sort_utils			\

SRCS 			= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC)))
OBJS 			= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

SRCS_BONUS 		= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_BONUS)))
OBJS_BONUS 		= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_BONUS)))

ifdef BONUS
	NAME = $(NAME_BONUS)
else
	NAME = $(NAME_MANDATORY)
endif

ifdef BONUS
	OBJ_RESULT = $(OBJS_BONUS)
else
	OBJ_RESULT = $(OBJS)
endif

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = ar -rf

OBJ_MKDIR	= create_dir
OBJ_DIR		= objs/
SRC_DIR		= 

all : $(NAME)

$(OBJ_MKDIR):
	mkdir -p $(OBJ_DIR) 

$(NAME) : $(OBJ_RESULT)
	make all -C $(LIBFT)
	mv libft/libft.a ./$(OBJ_DIR)
	$(CC) $(CFLAGS) $^ $(OBJ_DIR)libft.a -o $@

$(OBJ_DIR)%.o : %.c | $(OBJ_MKDIR)
	$(CC) $(CFLAGS) -c $^ -I./ -o $@

bonus :
	make BONUS=1

clean:
	make fclean -C $(LIBFT)
	rm -rf libft.a checker push_swap
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(OBJ_DIR)
	
re : fclean all
