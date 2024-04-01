# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 15:05:58 by yonghlee          #+#    #+#              #
#    Updated: 2022/12/26 11:31:18 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror

NAME			= megaphone

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)