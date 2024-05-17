/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:20:48 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/08 12:24:08 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		n--;
		while (*str1 == *str2 && n > 0)
		{
			str1++;
			str2++;
			n--;
		}
		if ((*str1 < *str2))
			return (*str1 - *str2);
		else if ((*str1 > *str2))
			return (*str1 - *str2);
	}
	return (0);
}
