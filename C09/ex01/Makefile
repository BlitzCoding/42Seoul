CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCS = includes
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a

all : ${NAME}

.c.o:
	${CC} ${CFLAGS} -I ${INCS} -c $< -o ${<:.c=.o}
	
${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
