
NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = actions_s.c actions_r.c actions_p.c actions_rr.c parse_functions.c parse_functions_utils.c \
		ft_split.c check_argv_utils.c check_argv.c fill_node.c linked_list_functions.c push_swap.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o push_swap

clean:
	rm push_swap

fclean: clean

re: fclean all

.PHONY: all clean fclean re