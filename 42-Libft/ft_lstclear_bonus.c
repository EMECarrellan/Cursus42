/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:42:11 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/10 11:12:31 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		next = curr->next;
		del(curr->content);
		free (curr);
		curr = next;
	}
	*lst = NULL;
}
