/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:05:15 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/08 12:41:58 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t		buf;
	const char	*s;

	buf = 0;
	s = src;
	if (destsize == '\0')
		return (ft_strlen(src));
	while (buf < (destsize - 1) && *s != '\0')
	{
		*dest = *s;
		dest++;
		s++;
		buf++;
	}
	*dest = '\0';
	return (ft_strlen(src));
}
