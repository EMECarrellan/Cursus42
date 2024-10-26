/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:09:33 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/30 11:03:49 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_stack	*ft_sub_process(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		num;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
	{
		num = ft_atoi_ps(tmp[i]);
		printf("%s", tmp[i]);
		ft_add_back(&a, ft_stack_new(num));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		num;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		a = ft_sub_process(argv);
	else
	{
		while (i < argc)
		{
			num = ft_atoi_ps(argv[i]);
			printf("%d", num);
			ft_add_back(&a, ft_stack_new(num));
			i++;
		}
	}
	return (a);
}

int	ft_find_position_in_a(t_stack *a, int index)
{
	int position;
	t_stack *tmp;

	tmp = a;
	position = 0;
	while (tmp && tmp->index > index)
	{
		tmp = tmp->next;
		position++;
	}
	while (tmp && tmp->index < index)
	{
		tmp = tmp->next;
		position++;
	}

	return (position);
}

int ft_check_cost(t_stack *a, int index)
{
	int	cost;
	int pos_in_a;
	int	size;

	size = ft_lst_size(a);
	cost = 0;

	pos_in_a = ft_find_position_in_a(a, index);

	if (pos_in_a <= size / 2)
		cost = pos_in_a;
	else
		cost = size - pos_in_a;
	return (cost);
}