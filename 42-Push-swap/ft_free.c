/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:43:04 by emontes-          #+#    #+#             */
/*   Updated: 2024/08/23 12:48:39 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_free(t_stack **lst)
{
    t_stack *tmp;

    if (!lst)
        return ;
    while (*lst)
    {
        tmp = (*lst)->next;
        free(*lst);
        *lst = tmp;
    }
}
