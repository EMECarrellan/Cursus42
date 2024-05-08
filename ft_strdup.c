/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:23:48 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/08 12:42:36 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*str;
	size_t	i;

	str = (malloc ((ft_strlen(s1) + 1) * sizeof(char)));
	if (!str)
		return (0);
	i = 0;
	if (s1 == NULL)
	{
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
