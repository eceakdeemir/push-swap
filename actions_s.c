/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:06:51 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/21 15:51:08 by ecakdemi         ###   ########.fr       */
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
	ft_printf("sa\n");
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
