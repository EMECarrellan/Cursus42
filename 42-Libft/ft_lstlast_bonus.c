/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:32:25 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/10 10:32:25 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	curr;

	curr = ft_lstsize(lst) - 1;
	while (lst && curr > 0)
	{
		lst = lst->next;
		curr--;
	}
	return (lst);
}
