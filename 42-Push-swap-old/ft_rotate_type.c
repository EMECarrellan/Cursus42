/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:58:00 by emontes-          #+#    #+#             */
/*   Updated: 2024/08/26 12:13:42 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rotate_type_ab(t_stack *a, t_stack *b)
{
    int i;
    t_stack *tmp;

    tmp = a;
    i = ft_case_rrarrb(a, b, a->num);
    while (tmp)
    {
        
    }
    return (i);
}