#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				number;
	int				index;
	struct s_list	*next;

}	t_list;

void	sa(t_list **head);
void	sb(t_list **head);
void	ss(t_list **head_a, t_list **head_b);

#endif