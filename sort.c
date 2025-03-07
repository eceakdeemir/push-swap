#include "pushswap.h"

int set_top_calc(t_list **head_a, t_list *tmp_a)
{
    int list_size;
    int tmp_size;
    t_list *head;

    head = *head_a;
    list_size = ft_lstsize(head);
    tmp_size = ft_lstsize(tmp_a);
    if (tmp_size < (list_size / 2))
        return (tmp_size);
    else
        return (list_size - tmp_size);
    return (-1);
}

int set_b_position(t_list **head_b, t_list *tmp_a)
{
    t_list *head;

    head = *head_b;
}
/*
void cost_calc(t_list **head_a, t_list **head_b)
{
    t_list *tmp_a;
    t_list *tmp_b;

    tmp_a = *head_a;
    tmp_b = *head_b;
    while (tmp_a)
    {
        tmp_a->cost += set_top_calc(head_a, tmp_a);
        tmp_a->cost += set_b_position(head_b, tmp_a);
        tmp_a = tmp_a->next;
    }
}*/
/*
int sort(t_list **head_a, t_list **head_b)
{
    if (ft_lstsize(*head_a) == 2)
    {
        sa(head_a);
        return (1);
    }
    // push first and second number to b stack
    pb(head_a, head_b);
    pb(head_a, head_b);
    cost_calc(head_a, head_b);
}*/
