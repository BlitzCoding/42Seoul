# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 14:50:43 by yonghlee          #+#    #+#              #
#    Updated: 2022/12/27 14:52:40 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp
					newZombie.cpp
					randomChump.cpp
					Zombie.cpp
					
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror

NAME			= BraiiiiiiinnnzzzZ

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)