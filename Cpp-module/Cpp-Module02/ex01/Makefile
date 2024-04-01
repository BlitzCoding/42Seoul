# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 16:27:43 by yonghlee          #+#    #+#              #
#    Updated: 2022/12/31 12:28:39 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= main
					
CXX				= c++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp	\
					Fixed.cpp
					
OBJS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)