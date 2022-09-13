SRCS		= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJS		= ${SRCS:.c=.o}
CFLAGS		= -Wall -Wextra -Werror
DELINP		= .stdin.txt
NAME		= libft.a
CC			= gcc
AR			= ar r
RM			= rm -rf
.PHONY		= all clean fclean re

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:	
			${RM} ${OBJS} ${DELINP}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

