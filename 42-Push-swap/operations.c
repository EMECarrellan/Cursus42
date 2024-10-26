/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:38:08 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/09 11:52:34 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_stack **a, int j)
{
    t_stack *tmp;
    
    if (ft_lst_size(*a) <= 1)
        return ;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = (*a)->next;
    (*a)->next = tmp;
    if (j == 0)
        write(1, "sa\n", 3);
}

void    ft_sb(t_stack **b, int j)
{
    t_stack *tmp;
    
    if (ft_lst_size(*b) <= 1)
        return ;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = (*b)->next;
    (*b)->next = tmp;
    if (j == 0)
        write(1, "sb\n", 3);
}

void    ft_ss(t_stack **a, t_stack **b, int j)
{
    if (ft_lst_size(*a) > 1 && ft_lst_size(*b) > 1)
    {
        ft_sa(a, 1);
        ft_sb(b, 1);
        if (j == 0)
            write(1, "ss\n", 3);
    }
}

void    ft_pa(t_stack **stack_b, t_stack **stack_a, int j)
{
    t_stack *tmp;

    if(*stack_b == NULL)
        return ;
    tmp = *stack_a;
    *stack_a = *stack_b;
    *stack_b = (*stack_b)->next;
    (*stack_a)->next = tmp;
    if (j == 0)
        write(1, "pa\n", 3);
}

void    ft_pb(t_stack **stack_a, t_stack **stack_b, int j)
{
    t_stack *tmp;
    
    if(ft_lst_size(*stack_a) <= 1)
        return ;
    tmp = *stack_b;
    *stack_b = *stack_a;
    *stack_a = (*stack_a)->next;
    (*stack_b)->next = tmp;
    if (j == 0)
        write(1, "pb\n", 3);
}

