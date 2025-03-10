/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:06:26 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/10 17:47:26 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void test_list_printer(t_list **head_a)
{
	t_list *tmp;
	tmp = *head_a;
	for (; tmp; tmp = tmp->next)
		printf("num: %d\n", tmp->number);
}
void	rotate_last_list(t_list **head_list)
{
	t_list *head;
	t_list *min_node;

	head = *head_list;
	min_node = head;
	while(head)
	{
		if (min_node->number > head->number)
			min_node = head;
		head = head->next;
	}
	head = *head_list;
	while (this_is_top(head_list, min_node) != 1)
	{
		if (this_is_which_half(head_list, min_node) == 1)
			ra(head_list, 1);
		if (this_is_which_half(head_list, min_node) == 2)
			rra(head_list, 1);
	}
}

int main(int ac, char **av)
{
	//argv girmediğinde seg
	int ctrl;
	int ctrl2;
	char **new_argv;
	t_list **head_a;
	t_list **head_b;
	t_list *head_a_list;
	t_list *head_b_list;

	head_a = malloc(sizeof(t_list *));
	head_b = malloc(sizeof(t_list *));
	head_a_list = *head_a;
	new_argv = parse(ac, av);
	ctrl = check_argv_digit(new_argv);
	fill_node(new_argv, head_a);
	ctrl2= check_argv(head_a);
	if (ctrl != 1 || ctrl2 != 1)
		exit(0);
	pb(head_a, head_b);
	pb(head_a, head_b);
	while(head_a)
	{
		//printf("uzunluk: %d\n", ft_lstsize(*head_a));
		if (ft_lstsize(*head_a) == 3)
		{
			sorted_three(t_list *head_a)
			
		}
			break;
		else if(ft_lstsize(*head_a) > 3)
		{
			cost_calc(head_a, head_b);
			push_nodes_b(head_a, head_b);
		}
	}
	head_b_list = *head_b;
	while(head_b)
	{
		// printf("--------------B---------\n");
		// test_list_printer(head_b);
		// printf("--------------A---------\n");
		set_a_position(head_a, *head_b);
		push_a_back(head_a, head_b);
		if (ft_lstsize(*head_b) == 0)
		break ;
	}
	test_list_printer(head_a);
	rotate_last_list(head_a);
}

