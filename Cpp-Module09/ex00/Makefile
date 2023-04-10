NAME			= btc 
					
CXX				= c++
RM				= rm -rf
# CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp	\
					BitcoinExchange.cpp
					
OBJS			= $(SRCS:.cpp=.o)


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)