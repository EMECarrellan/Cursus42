/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:13:59 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/06 11:34:29 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_three(t_stack **stack_a)
{
    if(ft_max(*stack_a) == (*stack_a)->next->num)
        ft_rra(stack_a, 0);
    if((ft_max(*stack_a) == (*stack_a)->num) && !ft_checksorted(*stack_a))
        ft_ra(stack_a, 0);
    if((ft_min(*stack_a) == (*stack_a)->next->num) && !ft_checksorted(*stack_a))
        ft_sa(stack_a, 0);
}
