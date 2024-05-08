/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:14:05 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/08 12:42:40 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_tokens(char const *s, char c)
{
	int	tokens;

	tokens = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			while (*s && *s != c)
				s++;
			tokens++;
		}
		else
			s++;
	}
	return (tokens);
}

static char	*string_malloc(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc((i + 1) * (sizeof(char)));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_aux_split(const char *s, char c)
{
	char		**arr;
	int			i;
	int			tokens;
	char const	*start;

	tokens = count_tokens(s, c);
	i = 0;
	arr = malloc((tokens + 1) * (sizeof(char *)));
	if (!arr)
		return (NULL);
	while (*s && i < tokens)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			arr[i] = string_malloc(start, c);
			if (!arr[i++])
				return (ft_free(arr));
		}
	}
	return (arr[i] = 0, arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = ft_aux_split(s, c);
	if (!s || !arr)
		return (NULL);
	return (arr);
}
