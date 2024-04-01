# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 15:00:44 by yonghlee          #+#    #+#              #
#    Updated: 2022/07/10 18:18:04 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAG = -Wall -Wextra -Werror -I
CC = cc

INCLUDE  = include
SRCS_DIR = src/
OBJS_DIR = obj/

RM = rm -rf
AR = ar rcs

SRC_FILES = ft_memset	\
		ft_bzero		\
		ft_memcpy		\
		ft_memmove 	\
		ft_memchr	\
		ft_memcmp	\
		ft_strlen	\
		ft_isalpha 	\
		ft_isdigit	\
		ft_isalnum	\
		ft_isascii	\
		ft_isprint	\
		ft_toupper	\
		ft_tolower	\
		ft_strchr	\
		ft_strrchr	\
		ft_strncmp	\
		ft_strlcpy	\
		ft_strlcat	\
		ft_strnstr	\
		ft_atoi	\
		ft_calloc	\
		ft_strdup	\
		ft_substr	\
		ft_strjoin 	\
		ft_strtrim	\
		ft_split	\
		ft_itoa		\
		ft_strmapi	\
		ft_putchar_fd	\
		ft_putstr_fd	\
		ft_putendl_fd	\
		ft_putnbr_fd	\
		ft_striteri		\
		ft_lstnew		\
		ft_lstadd_front	\
		ft_lstsize		\
		ft_lstlast		\
		ft_lstadd_back	\
		ft_lstclear		\
		ft_lstdelone		\
		ft_lstiter		\
		ft_lstmap		\
		get_next_line	\
		get_next_line_utils	\

SRC = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJ_MKDIR = create_dir

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $^

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJ_MKDIR)
	$(CC) $(CFLAG) $(INCLUDE) -c $< -o $@

$(OBJ_MKDIR) :
	mkdir -p $(OBJS_DIR)

%.o : %c
	cc $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME) 

re : fclean all
