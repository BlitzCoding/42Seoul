# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 13:44:51 by yonghlee          #+#    #+#              #
#    Updated: 2023/01/14 13:45:15 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= main
					
CXX				= c++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp \
					Bureaucrat.cpp	\
					Form.cpp	\
					PresidentialPardonForm.cpp	\
					RobotomyRequestForm.cpp	\
					ShrubberyCreationForm.cpp
					
OBJS			= $(SRCS:.cpp=.o)


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)