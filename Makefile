
NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = actions_s.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o push_swap

clean:
	rm push_swap

fclean: clean

re: fclean all

.PHONY: all clean fclean re