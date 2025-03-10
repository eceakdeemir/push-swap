/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:07:05 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/10 17:55:15 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sorted_three(t_list **head)
{
	t_list *head_a;
	t_list *max_node;
	
	head_a = *head;
	max_node = head_a;
	max_node->index = 0;
	while(head_a)
	{
		if (max_node->number < head_a->number)
		{
			max_node = head_a;
			max_node->index += 1;
		}
		head_a = head_a->next;
	}
	if (max_node->index == 0)
		ra(head, 1);
	if (check_argv_sorted(head) == 0)
		sa(head);
}

int fill_node(char **new_argv, t_list **head)
{
	int i;
	int content;

	i = 0;
	while (new_argv[i])
	{
		content = ft_atoi(new_argv[i]);
		ft_lstadd_back(head,ft_lstnew(content));
		i++;
	}
	return 1;
}