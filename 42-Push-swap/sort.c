/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:02:46 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/30 13:04:02 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    initialize_index(t_stack *a)
{
    while (a)
    {
        a->index = -1;
        a = a->next;
    }
}

void	ft_index(t_stack *a)
{
    t_stack *tmp;
    int min;
    int i;
    int size;
    // orders the stack so it can find the right index
    initialize_index(a);
    size = ft_lst_size(a);
    i = 0;
    while (i < size)
    {
        min = ft_min(a);
        tmp = a;
        while (tmp)
        {
            if (tmp->num == min && tmp->index == -1)
                {
                    tmp->index = ++i;
                    break ;
                }
            tmp = tmp->next;
        }
    }
}

void    ft_sort_all(t_stack **stack_a, t_stack **stack_b)
{
    int     cost_a;
    int     min_cost;
    t_stack *cheapest_node;
    t_stack *tmp_b;
    
    ft_pb_til_three(stack_a, stack_b);
    ft_sort_three(stack_a);


    // TODO: This code logic
    while (*stack_b)
    {
        tmp_b = *stack_b;
        cheapest_node = tmp_b;
        min_cost = ft_check_cost(*stack_a, tmp_b->index);
        while (tmp_b)
        {
            cost_a = ft_check_cost(*stack_a, tmp_b->index);
            if (cost_a < min_cost)
            {
                min_cost = cost_a;
                cheapest_node = tmp_b;
            }
            tmp_b = tmp_b->next;
        }
        ft_pa(stack_b, stack_a, 0);
    }
    while (!ft_checksorted(*stack_a))
    {
        if (cheapest_node->index <= (ft_lst_size(*stack_a) / 2))
            ft_ra(stack_a, 0);
        else
            ft_rra(stack_a, 0);
    }
}
// Testing function (DELETE)
void print_stack(t_stack *a)
{
    while (a)
    {
        printf("Número: %d, Índice: %d\n", a->num, a->index);
        a = a->next;
    }
}


void    ft_sort(t_stack **stack_a)
{
    t_stack *stack_b;

    stack_b = NULL;
    if ((ft_lst_size(*stack_a) == 2))
        ft_sa(stack_a, 0);
    else if (ft_lst_size(*stack_a) == 3)
        ft_sort_three(stack_a);
    else
    {
        ft_index(*stack_a);
        ft_sort_all(stack_a, &stack_b);
        printf("\nStack a: \n");
        print_stack(*stack_a); // testing DELETE
        printf("\nStack b: \n");
        print_stack(stack_b); // testing DELETE
    }
}
