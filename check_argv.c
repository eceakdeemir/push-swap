/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:06:57 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/10 17:01:46 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int check_argv_sorted(t_list **head_a)
{
	t_list *head;

	head = *head_a;
	while (head)
	{
		if (head && head->next)
			if (head->number > head->next->number)
				return (1);
		head = head->next;
	}
	return (0);
}

static int check_argv_unique(t_list **head_a)
{
	t_list *head;
	t_list *tmp;

	head = *head_a;
	while(head)
	{
		tmp = head->next;
		while(tmp)
		{
			if (tmp->number == head->number)
				return (0);
			tmp = tmp->next;
		}
		head = head->next;
	}
	return (1);
}

int check_argv(t_list **head_a)
{
	int ctrl1;
	int ctrl2;

	ctrl1 = check_argv_sorted(head_a);
	ctrl2 = check_argv_unique(head_a);
	if (ctrl1 == 0)
		free_all_nodes(head_a, NULL);
	if (ctrl2 == 0)
		return (0);
	return (1);
	
}

int check_argv_digit(char **new_argv)
{
	int i;
	int j;

	i = 0;
	while (new_argv[i])
	{
		j = 0;
		while (new_argv[i][j])
		{
			if ((new_argv[i][j] == '+' || new_argv[i][j] == '-') && j == 0)
			{
				j++;
				continue;
			}
			if (ft_isdigit(new_argv[i][j]) != 1)
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

int is_sort(t_list **head)
{
	t_list *head_a;
	head_a = *head;

	while (head_a && head_a->next)
	{
		if (head_a->number > head_a->next->number)
			return (0);
		head_a = head_a->next;
	}
	return (1);
}

