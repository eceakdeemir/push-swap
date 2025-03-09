
#include "pushswap.h"

int	this_is_top(t_list **head_list, t_list *tmp)
{
	if (*head_list == tmp)
		return (1);
	return (0);
}

int	this_is_which_half(t_list **head_list, t_list *tmp)
{
	int		tmp_size;
	int		list_size;
	t_list	*head;

	head = *head_list;
	tmp_size = ft_lstsize(tmp);
	list_size = ft_lstsize(head);
	tmp->index = list_size - tmp_size;
	if(tmp->index < (list_size / 2))
		return (1);
	else if (tmp->index >= (list_size / 2))
		return (2);
	return (0);
}

t_list *which_node_push(t_list **head_list_a)
{
	t_list	*head_a;
	t_list	*this_node;

	head_a = *head_list_a;
	this_node = head_a;
	while (head_a)
	{
		if (this_node->total_cost > head_a->total_cost)
			this_node->total_cost = head_a->total_cost;
		head_a = head_a->next;
	}
	return (this_node);
}
void push_nodes_single_control(t_list **head_list_a, t_list **head_list_b, t_list *push_node, t_list *match_node)
{
	int	half_a;
	int	half_b;

	half_a = this_is_which_half(head_list_a, push_node);
	half_b = this_is_which_half(head_list_b, match_node);
	test_list_printer(head_list_a);
	while ((half_a == 1) && (this_is_top(head_list_a, push_node) != 1))
		ra(head_list_a);
	while ((half_b == 1) && (this_is_top(head_list_b, match_node) != 1))
		rb(head_list_b);
	while ((half_a == 2) && (this_is_top(head_list_a, push_node) != 1))
		rra(head_list_a);
	while ((half_b == 2) && (this_is_top(head_list_b, match_node) != 1))
		rrb(head_list_b);
}

void	push_nodes_both_control(t_list **head_list_a, t_list **head_list_b, t_list *push_node)
{
	int	half_a;
	int	half_b;
	half_a = this_is_which_half(head_list_a, push_node);
	half_b = this_is_which_half(head_list_b, push_node->match_node);
	while ((half_a == half_b) && (this_is_top(head_list_a, push_node) != 1) && (this_is_top(head_list_b, push_node->match_node) != 1))
	{
		if (half_a == 1 && half_b == 1)
			rr(head_list_a, head_list_b);
		else if (half_a == 2 && half_b == 2)
			rrr(head_list_a, head_list_b);
		half_a = this_is_which_half(head_list_a, push_node);
		half_b = this_is_which_half(head_list_b, push_node->match_node);
	}
	if (this_is_top(head_list_a, push_node) != 1)
	{
		push_nodes_single_control(head_list_a, head_list_b, push_node, push_node->match_node);
		test_list_printer(head_list_a); //burda patlıyoo
	}
	else if (this_is_top(head_list_b, push_node->match_node) != 1)
		push_nodes_single_control(head_list_a, head_list_b, push_node, push_node->match_node);
}

int push_nodes_b(t_list **head_list_a, t_list **head_list_b)
{
	t_list	*push_node;
	int		top_a; 
	int		top_b;

	push_node = which_node_push(head_list_a);
	top_a = this_is_top(head_list_a, push_node);
	top_b = this_is_top(head_list_b, push_node->match_node);
	while (top_a != 1 || top_b != 1)
	{
		push_nodes_both_control(head_list_a, head_list_b, push_node);
		top_a = this_is_top(head_list_a, push_node);
		top_b = this_is_top(head_list_b, push_node->match_node);
	}
	if(top_a == 1 && top_b == 1)
		pb(head_list_a, head_list_b);
	return 0;
}

