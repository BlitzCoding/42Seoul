# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 08:55:18 by yonghlee          #+#    #+#              #
#    Updated: 2022/12/26 11:31:13 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Contact.cpp main.cpp PhoneBook.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= phoneBook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)