/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:25:25 by emontes-          #+#    #+#             */
/*   Updated: 2024/08/23 12:38:32 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **a, int j)
{
	t_stack	*tmp;

	if (ft_lst_size(*a) <= 1)
		return ;
	tmp = *a;
	*a = ft_lstlast_ps(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b, int j)
{
	t_stack	*tmp;

	if (ft_lst_size(*b) <= 1)
		return ;
	tmp = *b;
	*b = ft_lstlast_ps(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int j)
{
	ft_ra(a, 1);
	ft_rb(b, 1);
	if (j == 0)
		write(1, "rr\n", 3);
}

void	ft_rra(t_stack **a, int j)
{
	t_stack	*last;
	t_stack	*prev_last;

	if (ft_lst_size(*a) <= 1)
		return ;
	prev_last = *a;
	while (prev_last->next->next)
		prev_last = prev_last->next;
	last = prev_last->next;
	last->next = *a;
	prev_last->next = NULL;
	*a = last;
	if (j == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b, int j)
{
	t_stack	*last;
	t_stack	*prev_last;

	prev_last = *b;
	while (prev_last->next->next)
		prev_last = prev_last->next;
	last = prev_last->next;
	last->next = *b;
	prev_last->next = NULL;
	*b = last;
	if (j == 0)
		write(1, "rrb\n", 4);
}
