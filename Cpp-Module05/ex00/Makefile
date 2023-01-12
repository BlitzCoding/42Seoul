# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonghlee <yonghlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 15:29:55 by yonghlee          #+#    #+#              #
#    Updated: 2023/01/12 15:31:15 by yonghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat 

SOURCES=	main.cpp			\
			Bureaucrat.cpp		\

FLAGS = -Werror -Wall -Wextra

OBJECTS= $(SOURCES:.cpp=.o)

%.o: %.cpp
	@clang++ -Wall -Werror -Wextra -o $@ -c $<

$(NAME): $(OBJECTS)
	clang++ $(FLAGS) $(OBJECTS) -o $@

all: $(NAME)

clean: 
	@rm -f $(OBJECTS)

fclean:
	@make clean
	@rm -f $(NAME)

re: fclean all