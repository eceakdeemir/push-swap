#include "pushswap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	s_len;
	size_t			i;

	i = 0;
	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

char	**parse(int ac, char **av)
{
	int i;
	char *full_argv;
	char **new_argv;

	full_argv = ft_strdup("");
	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			full_argv = ft_strjoin(full_argv, av[i]);
			i++;
		}
		new_argv = ft_split(full_argv, ' ');
		free(full_argv);
		//printf(".%s. .%s. .%s. .%s. .%s. .%s.\n",	new_argv[0],	new_argv[1],	new_argv[2],	new_argv[3],	new_argv[4],	new_argv[5]);
	}
	else
		return NULL;
	return (new_argv);
}
/*
int main(int ac, char **av)
{
	parse(ac, av);
}*/