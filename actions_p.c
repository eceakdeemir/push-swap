/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:49:04 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/21 15:50:26 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ft_printf("pa\n");
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
	ft_printf("pb\n");
}
