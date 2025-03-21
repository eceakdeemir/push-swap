/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:07:07 by ecakdemi          #+#    #+#             */
/*   Updated: 2025/03/21 16:03:37 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	del(char **str, int strc)
{
	int	i;

	i = 0;
	if (strc == 0)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
	}
	else
	{
		while (i < strc)
		{
			free(str[i]);
			i++;
		}
	}
	free (str);
	return (1);
}

static int	ft_string_count(char const *s, char c)
{
	int	i;
	int	string_count;

	i = 0;
	string_count = 0;
	while (s[i])
	{
		if (s[i] == c && i > 0 && s[i - 1] != c)
		{
			while (s[i + 1] != '\0' && s[i] == c)
				i++;
			string_count++;
		}
		i++;
	}
	if (s[i - 1] != c && i > 0)
		string_count++;
	return (string_count);
}

static int	ft_string_appender(char const *s, char **str, char c,
			int string_count)
{
	int	i;
	int	strc;
	int	start;

	i = 0;
	strc = 0;
	start = 0;
	while (strc < string_count)
	{
		if (s[i] != c && i > 0 && s[i - 1] == c)
			start = i;
		if ((s[i] == c && i > 0 && s[i - 1] != c) || s[i] == '\0')
		{
			str[strc] = ft_substr(s, start, i - start);
			if (!str[strc])
				return (del(str, strc));
			while (s[i] && s[i + 1] != '\0' && s[i + 1] == c)
				i++;
			strc++;
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		string_count;

	string_count = ft_string_count(s, c);
	str = (char **)malloc(sizeof(char *) * (string_count + 1));
	if (!str)
		return (NULL);
	str[string_count] = NULL;
	if (ft_string_appender(s, str, c, string_count) == 1)
		return (NULL);
	return (str);
}
