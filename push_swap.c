#include "pushswap.h"

void test_list_printer(t_list **head_a)
{
	t_list *tmp;
	tmp = *head_a;
	for (; tmp; tmp = tmp->next)
		printf("num: %d\n", tmp->number);
}

//argüman girilmediğinde seg alıyor!!!!

int main(int ac, char **av)
{
	int ctrl;
	char **new_argv;
	t_list **head_a;
	//t_list **head_b;

	head_a = malloc(sizeof(t_list *));
	//head_b = malloc(sizeof(t_list *));
	ctrl = 1;
	new_argv = parse(ac, av);
	ctrl = check_argv_digit(new_argv);
	if (ctrl != 1)
		return 0;
	fill_node(new_argv, head_a);
	// return error if invalid checks
	//sort(head_a, head_b);
}