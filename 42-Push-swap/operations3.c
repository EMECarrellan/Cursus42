/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:52:24 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/17 11:47:25 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_stack **a, t_stack **b, int j)
{
	if (ft_lst_size(*a) <= 1 || ft_lst_size(*b) <= 1)
		return ;
	ft_rra(a, 1);
	ft_rrb(b, 1);
	if (j == 0)
		write(1, "rrr\n", 4);
}
void	ft_pb_til_three(t_stack **a, t_stack **b)
{
	    while (ft_lst_size(*a) > 3)
        ft_pb(a, b, 0);
}