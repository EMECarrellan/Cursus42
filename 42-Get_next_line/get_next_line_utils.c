/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:05:47 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/17 12:57:16 by emontes-         ###   ########.fr       */
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

void	ft_putstr_get(char *str)
{
	while (*str)
		write (1, str++, 1);
}

size_t	ft_strlcpy_get(char *dest, char *src, size_t destsize)
{
	size_t		buf;
	char	*s;

	buf = 0;
	s = src;
	if (destsize == '\0')
		return (ft_strlen_get(src));
	while (buf < (destsize - 1) && *s != '\0')
	{
		*dest = *s;
		dest++;
		s++;
		buf++;
	}
	*dest = '\0';
	return (ft_strlen_get(src));
}
