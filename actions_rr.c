/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:06:45 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/10 15:49:46 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void rra(t_list **head_a, int flag)
{
	t_list *head;
	t_list *second_last;
	t_list *last;
	t_list *tmp;

	head = *head_a;
	tmp = *head_a;
	while (tmp->next != NULL)
	{
		if (tmp->next->next == NULL)
			second_last = tmp;
		tmp = tmp->next;
	}
	last = tmp;
	second_last->next = NULL;
	last->next = head;
	*head_a = last;
	if (flag == 1)
		printf("rra\n");
}

void rrb(t_list **head_b, int flag)
{
	t_list *head;
	t_list *second_last;
	t_list *last;
	t_list *tmp;

	head = *head_b;
	tmp = *head_b;
	while (tmp->next != NULL)
	{
		if (tmp->next->next == NULL)
			second_last = tmp;
		tmp = tmp->next;
	}
	last = tmp;
	second_last->next = NULL;
	last->next = head;
	*head_b = last;
	if (flag == 1)
		printf("rrb\n");
}

void rrr(t_list **head_a, t_list **head_b)
{
	t_list *head_list_a;
	t_list *head_list_b;

	head_list_a = *head_a;
	head_list_b = *head_b;
	rra(head_a, 0);
	rrb(head_b, 0);
	if (head_list_a->index == ft_lstsize(head_list_a))
			head_list_a->index = 0;
	else
		head_list_a->index += 1;
	if (head_list_b->index == ft_lstsize(head_list_b))
			head_list_b->index = 0;
	else
		head_list_b->index += 1;
	printf("rrr\n");
}
/*
int main()
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));
	t_list **head = malloc(sizeof(t_list));
	*head = node1;
	node1->next = node2;
	node1->next->next = node3;
	node1->next->next->next = node4;

	node1->number = 4;
	node2->number = 5;
	node3->number = 6;
	node4->number = 7;

	printf("%d %d %d %d\n", (*head)->number, (*head)->next->number, (*head)->next->next->number, (*head)->next->next->next->number);
	rrb(head);
	printf("%d %d %d %d\n", (*head)->number, (*head)->next->number, (*head)->next->next->number, (*head)->next->next->next->number);
	
	//printf("%d\n", node1->number);
}
*/