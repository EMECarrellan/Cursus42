/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:05:47 by emontes-          #+#    #+#             */
/*   Updated: 2024/08/05 13:46:58 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen_get(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strlcpy_get(char *dest, char *src, size_t destsize)
{
	size_t	buf;
	char	*s;

	buf = 0;
	s = src;
	if (destsize == '\0')
		return (src);
	while (buf < (destsize - 1) && *s != '\0')
	{
		*dest = *s;
		dest++;
		s++;
		buf++;
	}
	return (dest - buf);
}

char	*ft_strdup_get(char *s1)
{
	void	*str;
	size_t	i;

	str = (malloc ((ft_strlen_get(s1) + 1) * sizeof(char)));
	if (!str)
		return (NULL);
	i = 0;
	if (!s1)
	{
		free (str);
		return (NULL);
	}
	while (*s1)
	{
		((char *)str)[i] = *s1;
		s1++;
		i++;
	}
	((char *)str)[i] = '\0';
	return ((char *)str);
}

char	*ft_strjoin_get(char *s1, char *s2)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s1)
		s1 = "";
	str = malloc ((ft_strlen_get(s1) + ft_strlen_get(s2)) * (sizeof(char)) + 1);
	if (!str)
		return (NULL);
	if (!s1 || !s2)
	{
		free (str);
		return (NULL);
	}
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

char	*ft_strchr_get(char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
