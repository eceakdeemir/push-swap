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
void	pa(t_list **head_a, t_list **head_b);
void	pb(t_list **head_a, t_list **head_b);
void	ra(t_list **head_a);
void 	rb(t_list **head_b);
void 	rr(t_list **head_a, t_list **head_b);
void 	rra(t_list **head_a);
void 	rrb(t_list **head_b);
void 	rrr(t_list **head_a, t_list **head_b);

int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);







t_list	*ft_lstnew(int content);

void 	parse(int ac, char **av);





#endif