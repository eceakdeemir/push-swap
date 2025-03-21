
NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_GNL = get_next_line/get_next_line_utils.c get_next_line/get_next_line.c

SRC = actions_s.c actions_r.c actions_p.c actions_rr.c parse_functions.c parse_functions_utils.c \
		ft_split.c check_argv_utils.c check_argv.c fill_node.c linked_list_functions.c push_swap.c \
		sort.c create_b_utils.c push_a_back.c free_nodes.c


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o push_swap


clean:
	rm -f push_swap

fclean: clean

re: fclean all

.PHONY: all clean fclean re