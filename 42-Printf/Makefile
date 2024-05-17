NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr_base.c ft_putnbr.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar -src

$(NAME): ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} $(BONUS_OBJS)

fclean: clean
	${RM} ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re