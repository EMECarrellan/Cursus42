/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:36:37 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/30 11:42:12 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;
    
    if (argc == 1)
	    return (-1);
    a = ft_process(argc, argv);
    if (!a || ft_checkdup(a) || ft_checksorted(a))
    {
        ft_free(&a);
        ft_error();
    }
    if (!ft_checksorted(a))
        ft_sort(&a);
    ft_free(&a);
    return (0);
}
