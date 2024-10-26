/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:49:49 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/08 12:41:06 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < len + start)
		len = ft_strlen(s) - start;
	if (len == 0 || start > ft_strlen(s) || ft_strlen(s) == 0)
		return (ft_strdup(""));
	substr = malloc ((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (s[i] && j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
