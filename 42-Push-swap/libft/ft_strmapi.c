/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:37:52 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/08 12:41:38 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = malloc (i * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i != 0)
	{
		i--;
		str[i] = f(i, s[i]);
	}
	return (str);
}
