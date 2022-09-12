SRCS		= main.c ft_isalpha.c ft_isdigit.c
OBJS		= ${SRCS:.c=.o}
CFLAGS		= -Wall -Wextra -Werror
DELINP		= .stdin.txt
NAME		= a.out
CC			= gcc
RM			= rm -rf
.PHONY		= all clean fclean re

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:	
			${RM} ${OBJS} ${DELINP}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

