CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar_fd.c ft_putnbr_base.c ft_putnbr_fd.c ft_putptr.c ft_putstr_fd.c ft_uint.c
BSRCS = ft_printf_bonus.c ft_putchar_fd.c ft_putnbr_base.c ft_putnbr_fd.c ft_putptr.c ft_putstr_fd.c ft_uint.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

${NAME}: ${OBJS}
	ar rc $(NAME) $(OBJS)

all: ${NAME}

clean:
	${RM} ${OBJS} ${BOBJS}

fclean: clean
	${RM} ${NAME}
