#include "pushswap.h"

void	pa(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	if (head_b == NULL || head_a == NULL)
		return ;
	tmp = (*head_b)->next;
	(*head_b)->next = *head_a;
	*head_a = *head_b;
	(*head_b) = tmp;
	
}

void	pb(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	if (head_b == NULL || head_a == NULL)
		return ;
	tmp = (*head_a)->next;
	(*head_a)->next = *head_b;
	*head_b = *head_a;
	(*head_a) = tmp;
}
