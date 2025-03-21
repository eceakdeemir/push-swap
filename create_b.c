/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:00:10 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/21 16:02:04 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	push_nodes_b(t_list **head_list_a, t_list **head_list_b)
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
	if (top_a == 1 && top_b == 1)
		pb(head_list_a, head_list_b);
	return (0);
}
