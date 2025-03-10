#include "pushswap.h"

// tmp elemanının yukarı çıkması için gereken adım sayısı
int set_top_calc(t_list **head_list, t_list *tmp)
{
    int list_size;
    int tmp_size;
    t_list *head;

    head = *head_list;
    list_size = ft_lstsize(head);
    tmp_size = ft_lstsize(tmp);

    if (tmp_size < (list_size / 2))
    {
        tmp->cost_top = tmp_size;
        return (1); // ikinci yarı
    }
    else
    {
        tmp->cost_top = (list_size - tmp_size);
        return (0); // birinci yarı
    }
    return (-1);
}

int set_top_calc_b(t_list **head_list_a, t_list **head_list_b, t_list *tmp)
{
    int list_size_b;
    int tmp_size_b;
    t_list *head_b;
    t_list *head_a;

    head_b = *head_list_b;
    head_a = *head_list_a;
    list_size_b = ft_lstsize(head_b);
    tmp_size_b = ft_lstsize(tmp);

    if (tmp_size_b < (list_size_b / 2))
    {
        head_a->cost_match = tmp_size_b;
        return (1); // ikinci yarı
    }
    else
    {
        head_a->cost_match = (list_size_b - tmp_size_b);
        return (0); // birinci yarı
    }
    return (-1);
}
//verilen node'un b'de kendinden küçük en büyük node'unun yukarı çıkması için gereken adım sayısı

int set_b_position(t_list **head_b, t_list *tmp_a)
{
    t_list  *head;
    t_list  *best_node;
    t_list  *max_node;

    head = *head_b;
    max_node = head;
    best_node = NULL;
    while (head)
    {
        if (max_node->number < head->number)
            max_node = head;
        if (tmp_a->number > head->number)
        {
            if (best_node == NULL)
                best_node = head;
            if (best_node->number < head->number)
                best_node = head;
        }
        head = head->next;
    }
    tmp_a->match_node = best_node;
    if (best_node == NULL)
        tmp_a->match_node = max_node;
    return 0;
}

void    cost_calc(t_list **head_a, t_list **head_b)
{
    t_list  *tmp_a;
    int     ctrl_a;
    int     ctrl_b;

    tmp_a = *head_a;
    tmp_a->total_cost = 0;
    while (tmp_a)
    {
        ctrl_a = set_top_calc(head_a, tmp_a);
        ctrl_b = set_b_position(head_b, tmp_a);
        if ((ctrl_a == ctrl_b) && ((ctrl_a != -1 || ctrl_b != -1)))
        {
            while ((tmp_a->cost_top > 0) && (tmp_a->match_node->cost_match > 0))
            {
                tmp_a->cost_top--;
                tmp_a->match_node->cost_match--;
                tmp_a->total_cost++;
            }
        }
        tmp_a->total_cost += (tmp_a->cost_top + tmp_a->match_node->cost_match);
        tmp_a = tmp_a->next;
    }
}

int sort(t_list **head_a, t_list **head_b)
{
    // push first and second number to b stack
    pb(head_a, head_b);
    pb(head_a, head_b);
    cost_calc(head_a, head_b);
    return 0;
}