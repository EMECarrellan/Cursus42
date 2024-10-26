/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:07:49 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/17 11:34:30 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_stack *a)
{
	while (a && a->next)
	{
        if (a->num > a->next->num)
            return (0);
        a = a->next;
	}
	return (1);
}
