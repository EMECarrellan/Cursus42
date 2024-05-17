/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:15:38 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/10 12:24:27 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (!lst || !f)
		return ;
	curr = lst;
	while (curr)
	{
		next = curr->next;
		f(curr->content);
		curr = next;
	}
}
