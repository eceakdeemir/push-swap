/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:07:19 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/10 15:52:55 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int set_a_position(t_list **head_a, t_list *tmp_b)
{
    t_list  *head;
    t_list  *best_node;
    t_list  *min_node;

    head = *head_a;
    min_node = head;
    best_node = NULL;
    while (head)
    {
        if (min_node->number > head->number)
            min_node = head;
        if (tmp_b->number < head->number)
        {
            if (best_node == NULL)
                best_node = head;
            if (best_node->number > head->number)
                best_node = head;
        }
        head = head->next;
    }
    tmp_b->match_node = best_node;
    if (best_node == NULL)
        tmp_b->match_node = min_node;
    return 0;
}


void push_a_back(t_list **head_list_a, t_list **head_list_b)
{
	t_list *head_a;
    t_list *head_b;
    int half;

    head_a = *head_list_a;
    head_b = *head_list_b;
    half = this_is_which_half(head_list_a, head_b->match_node);
    while (half == 1 && (this_is_top(head_list_a, head_b->match_node) != 1))
        ra(head_list_a, 1);
    while (half == 2 && (this_is_top(head_list_a, head_b->match_node) != 1))
        rra(head_list_a, 1);
    if(this_is_top(head_list_a, head_b->match_node) == 1)
        pa(head_list_a, head_list_b);
}
