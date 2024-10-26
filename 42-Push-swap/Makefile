NAME = push_swap

SRCS = push_swap.c ft_stack_new.c sort.c ft_sort_three.c ft_freestr.c ft_lst_utils.c\
ft_free.c ft_error.c ft_check_sorted.c ft_check_dup.c ft_add_back.c algorithm.c operations.c \
operations2.c operations3.c ft_atoi_ps.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

${NAME}: ${OBJS} ${LIBFT}
	${CC} ${CFLAGS} ${OBJS} ${LIBFT} -o ${NAME}

${LIBFT}:
	make -C ${LIBFT_DIR}

all: ${NAME}

clean:
	${RM} ${OBJS}
	make -C ${LIBFT_DIR} clean

fclean: clean
	${RM} ${NAME}
	make -C ${LIBFT_DIR} fclean

re: fclean ${NAME}

.PHONY: all clean fclean re
