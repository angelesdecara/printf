CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

${NAME}: ${OBJS}
	ar rc $(NAME) $(OBJS)

all: ${NAME}

clean:
	${RM} ${OBJS} ${BOBJS}

fclean: clean
	${RM} ${NAME}
