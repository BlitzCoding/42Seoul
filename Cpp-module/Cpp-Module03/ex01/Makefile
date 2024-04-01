# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/31 18:07:28 by yonghlee          #+#    #+#              #
#    Updated: 2023/01/01 20:27:39 by iyonghun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= main
					
CXX				= c++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp \
					ClapTrap.cpp	\
					ScavTrap.cpp	\
					
OBJS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)