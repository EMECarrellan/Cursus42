/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:31:15 by emontes-          #+#    #+#             */
/*   Updated: 2024/08/26 12:40:27 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_find_index(t_stack *a, int num)
{
    int i;

    i = 0;
    while (a->num != num)
    {
        i++;
        a = a->next;
    }
    a->index = 0;
    return (i);
}

int ft_find_place_b(t_stack *stack_b, int num_push)
{
    int i;
    t_stack *tmp;

    i = 1;
    if (num_push > stack_b->num && num_push < ft_lstlast_ps(stack_b)->num)
        i = 0;
    else if (num_push > ft_max(stack_b) || num_push < ft_min(stack_b))
        i = ft_find_index(stack_b, ft_max(stack_b));
    return (i);
}
