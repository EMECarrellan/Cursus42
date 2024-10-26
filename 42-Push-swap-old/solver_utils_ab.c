/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:14:00 by emontes-          #+#    #+#             */
/*   Updated: 2024/08/26 12:25:54 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ft_case_rrarrb(t_stack *a, t_stack *b, int  c)
{
    int i;

    i = 0;
    if(ft_find_place_b(b, c))
        i = ft_lst_size(b) - ft_find_place_b(b, c);

    return (i);
}