NAME = do-op
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c ft_putstr.c arithmetic.c
OBJS = ${SRCS:.c=.o}

all : ${NAME}

.c.o :
	gcc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	gcc ${OBJS} -o ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all
