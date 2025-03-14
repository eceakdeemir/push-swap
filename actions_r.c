/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:06:34 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/10 15:50:57 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void ra(t_list **head_a, int flag)
{
	t_list	*first;
	t_list *second;
	t_list *tmp;

	tmp = *head_a;
	first = *head_a;
	second = (*head_a)->next;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	first->next = NULL;
	*head_a = second;
	if (flag == 1)
		printf("ra\n");
}

void rb(t_list **head_b, int flag)
{
	t_list	*first;
	t_list *second;
	t_list *tmp;

	tmp = *head_b;
	first = *head_b;
	second = (*head_b)->next;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	first->next = NULL;
	*head_b = second;
	if (flag == 1)
		printf("rb\n");
}

void rr(t_list **head_a, t_list **head_b)
{
	ra(head_a, 0);
	rb(head_b, 0);
	printf("rr\n");
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
	ra(head);
	printf("%d %d %d %d\n", (*head)->number, (*head)->next->number, (*head)->next->next->number, (*head)->next->next->next->number);
	
	//printf("%d\n", node1->number);
}*/
