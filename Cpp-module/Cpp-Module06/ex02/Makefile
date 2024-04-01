# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 18:09:27 by iyonghun          #+#    #+#              #
#    Updated: 2023/02/14 17:27:43 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= main
					
CXX				= c++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp	\
					A.cpp	\
					B.cpp	\
					C.cpp	\
					Base.cpp	\
					
OBJS			= $(SRCS:.cpp=.o)


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)