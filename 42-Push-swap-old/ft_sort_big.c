/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:16:55 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/06 11:38:19 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b)
// {
//     int     i;
//     t_stack *tmp;

//     while (ft_lst_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
//     {
//         tmp = *stack_a;
//         i = ft_rotate_type_ab(*stack_a, *stack_b);
//     }
// }

t_stack *ft_sort_b(t_stack **stack_a)
{
    t_stack *stack_b;
    
    stack_b = NULL;
    if (ft_lst_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
        ft_pb(stack_a, &stack_b, 0);
    if (ft_lst_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
    // if (ft_lst_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
    //     ft_sort_b_till_3(stack_a, &stack_b);
    if (!ft_checksorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);

    return (stack_b);
}

void    ft_sort(t_stack **stack_a)
{
    // t_stack *stack_b;
    // int     i;

    // stack_b = NULL;
    if (ft_lst_size(*stack_a) == 2)
        ft_sa(stack_a, 0);
    else
    {
        ft_sort_three(stack_a);
        // stack_b = ft_sort_b(stack_a);
        // stack_a = ft_sort_a(stack_a, &stack_b);
    }
}
