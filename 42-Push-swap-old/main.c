/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:03:26 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/06 11:30:53 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// gcc main.c operations.c operations2.c operations3.c ft_add_back.c ft_stack_new.c ft_lst_utils.c ft_error.c ft_sort_three.c -L. -l:libft/libft.a

int main()
{
    t_stack *a = NULL;
    t_stack *b = NULL;

    // 132 -> 
// 213 -> 
// 231 -> 
// 312 -> 
// 321 -> 
    ft_add_back(&a, ft_stack_new(3));
    ft_add_back(&a, ft_stack_new(2));
    ft_add_back(&a, ft_stack_new(1));
    // ft_add_back(&a, ft_stack_new(8));
    // ft_add_back(&a, ft_stack_new(4));
    // ft_add_back(&a, ft_stack_new(2));
    // ft_add_back(&a, ft_stack_new(0));

    ft_add_back(&b, ft_stack_new(1));
    ft_add_back(&b, ft_stack_new(3));
    ft_add_back(&b, ft_stack_new(5));
    ft_add_back(&b, ft_stack_new(8));
    ft_add_back(&b, ft_stack_new(4));
    ft_add_back(&b, ft_stack_new(2));
    ft_add_back(&b, ft_stack_new(0));

    t_stack *tmp = a;
    t_stack *tmp2 = b;
    while(tmp)
    {
        printf("%d, ", tmp->num);
        tmp = tmp->next;
    }
    printf("\n");
    while(tmp2)
    {
        printf("%d, ", tmp2->num);
        tmp2 = tmp2->next;
    }
    printf("Stack a y b originales \n");
    printf("Número más bajo= %d\n", ft_min(a));
    printf("Número más alto= %d\n", ft_max(a));
    
    ft_sort_three(&a);
    while(a)
    {
        printf("%d, ", a->num);
        a = a->next;
    }
    
    // ft_rrr(&a, &b, 0);
    
    // while(a)
    // {
    //     printf("%d, ", a->num);
    //     a = a->next;
    // }
    printf("\n");
    while(b)
    {
        printf("%d, ", b->num);
        b = b->next;
    }
    return (0);
}
