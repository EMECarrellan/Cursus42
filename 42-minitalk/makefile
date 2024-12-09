NAME_CLIENT = client
NAME_SERVER = server

CLIENT_SRC = client.c
SERVER_SRC = server.c

OBJCLIENT = $(CLIENT_SRC:.c=.o)
OBJSRV = $(SERVER_SRC:.c=.o)

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJCLIENT) $(LIBFT)
	$(CC) $(CCFLAGS) -o $(NAME_CLIENT) $(OBJCLIENT) -L $(LIBFT_DIR) -lft

$(NAME_SERVER): $(OBJSRV) $(LIBFT)
	$(CC) $(CCFLAGS) -o $(NAME_SERVER) $(OBJSRV) -L $(LIBFT_DIR) -lft

$(LIBFT):
	@make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CCFLAGS) -I $(LIBFT_DIR) -c $< -o $@

clean:
	@make clean -C $(LIBFT_DIR)
	rm -f $(OBJCLIENT) $(OBJSRV)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	rm -f $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all

.PHONY: all clean fclean re
