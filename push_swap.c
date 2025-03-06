#include "pushswap.h"

int main(int ac, char **av)
{
	int ctrl;
	char **new_argv;
	t_list **head_a;

	head_a = malloc(sizeof(t_list *));
	ctrl = 1;
	new_argv = parse(ac, av);
	ctrl = check_argv_digit(new_argv);
	if (ctrl != 1)
		return 0;
	fill_node(new_argv, head_a);
}