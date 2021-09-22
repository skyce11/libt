SRCS =  ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchar.c ft_substr.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_strtrim.c

OBJS = ${SRCS:.c=.o}

HDRS = libft.h

NAME = libft.a

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:	${HDRS}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		 ar rc ${NAME} ${OBJS}
		 ranlib ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: 	all clean fclean re


