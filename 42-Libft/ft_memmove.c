/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:25:41 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/08 12:43:01 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest && !src)
		return (dest);
	if (d < s)
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	else
	{
		d += (len - 1);
		s += (len - 1);
		while (len-- > 0)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}
