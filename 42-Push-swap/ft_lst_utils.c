/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:41:33 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/17 11:22:19 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_lstlast_ps(t_stack *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

int ft_lst_size(t_stack *lst)
{
    size_t  i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

int ft_min(t_stack *a)
{
    int min;

    while(a && a->index != -1)
        a = a->next;
    if (!a)
        return (-1);
    min = a->num;
    while (a)
    {
        if (a->index == -1 && a->num < min)
            min = a->num;
        a = a->next;
    }
    return(min);
}

int ft_max(t_stack *a)
{
    int i;

    i = a->num;
    while(a)
    {
        if(i < a->num)
            i = a->num;
        a = a->next;
    }
    return(i);
}