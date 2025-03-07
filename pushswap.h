#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				number;
	int				index;
	int				cost;
	struct s_list	*next;

}	t_list;

void	sa(t_list **head);
void	sb(t_list **head);
void	ss(t_list **head_a, t_list **head_b);
void	pa(t_list **head_a, t_list **head_b);
void	pb(t_list **head_a, t_list **head_b);
void	ra(t_list **head_a);
void 	rb(t_list **head_b);
void 	rr(t_list **head_a, t_list **head_b);
void 	rra(t_list **head_a);
void 	rrb(t_list **head_b);
void 	rrr(t_list **head_a, t_list **head_b);

char	*ft_strjoin(char *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**parse(int ac, char **av);

int		ft_atoi(const char *str);
int		ft_isdigit(int c);

int 	check_argv_digit(char **new_argv);
int 	check_argv(t_list **head_a);


t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int 	ft_lstsize(t_list *head);
int 	fill_node(char **new_argv, t_list **head);

int set_top_calc(t_list **head_a, t_list *tmp_a);
void cost_calc(t_list **head_a, t_list **head_b);






#endif