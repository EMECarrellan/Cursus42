/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:55:49 by emontes-          #+#    #+#             */
/*   Updated: 2024/08/09 12:10:08 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_freestr(char **lst)
{
    char    *num;

    if (!lst)
        return ;
    while (*lst)
    {
        num = *lst;
        lst++;
        free(num);
    }

    *lst = NULL;
}

