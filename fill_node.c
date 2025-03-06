#include "pushswap.h"

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