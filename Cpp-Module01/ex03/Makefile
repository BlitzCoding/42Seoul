# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 14:53:16 by yonghlee          #+#    #+#              #
#    Updated: 2022/12/27 14:53:50 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp
					Weapon.cpp
					HumanA.cpp
					HumanB.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror

NAME			= main

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)