# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 08:55:18 by yonghlee          #+#    #+#              #
#    Updated: 2022/12/21 13:45:31 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Contact.cpp main.cpp PhoneBook.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -rf
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= phoneBook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)