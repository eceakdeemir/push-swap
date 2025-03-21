/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:06:34 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/21 15:53:07 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_list **head_a, int flag)
{
	t_list	*first;
	t_list	*second;
	t_list	*tmp;

	tmp = *head_a;
	first = *head_a;
	second = (*head_a)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	first->next = NULL;
	*head_a = second;
	if (flag == 1)
		ft_printf("ra\n");
}

void	rb(t_list **head_b, int flag)
{
	t_list	*first;
	t_list	*second;
	t_list	*tmp;

	tmp = *head_b;
	first = *head_b;
	second = (*head_b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	first->next = NULL;
	*head_b = second;
	if (flag == 1)
		ft_printf("rb\n");
}

void	rr(t_list **head_a, t_list **head_b)
{
	ra(head_a, 0);
	rb(head_b, 0);
	ft_printf("rr\n");
}
