/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:06:51 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/10 15:06:52 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_list **head)
{
	t_list	*first;
	t_list	*second;

	first = *head;
	second = first->next;
	if (!(head || (*head)->next))
		return ;
	first->next = second->next;
	second->next = first;
	*head = second;
	printf("sa\n");
}

void	sb(t_list **head)
{
	t_list	*first;
	t_list	*second;

	first = *head;
	second = first->next;
	if (!(head || (*head)->next))
		return ;
	first->next = second->next;
	second->next = first;
	*head = second;
}

void	ss(t_list **head_a, t_list **head_b)
{
	sa(head_a);
	sb(head_b);
}
/*
int main()
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));
	node1->next = node2;
	node1->next->next = node3;
	node1->next->next->next = node4;

	node1->number = 4;
	node2->number = 5;
	node3->number = 6;
	node4->number = 7;

	printf("%d %d\n", node1->number, node1->next->number);
	sa(&node1);
	printf("%d %d\n", node1->number, node1->next->number);

}*/