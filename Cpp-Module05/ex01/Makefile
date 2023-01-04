# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iyonghun <iyonghun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 18:45:39 by yonghlee          #+#    #+#              #
#    Updated: 2023/01/04 20:35:09 by iyonghun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= main
					
CXX				= c++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp	\
					Bureaucrat.cpp	\
					Form.cpp	\
					
OBJS			= $(SRCS:.cpp=.o)


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)