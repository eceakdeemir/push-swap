/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:02:58 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/21 16:03:17 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_lstdelone(t_list *lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = tmp;
	}
}

void	free_all_nodes(t_list **head_a, t_list **head_b)
{
	if (head_a && *head_a)
		ft_lstclear(head_a);
	if (head_a)
		free(head_a);
	if (head_b && *head_b)
		ft_lstclear(head_b);
	if (head_b)
		free(head_b);
	exit(0);
}
