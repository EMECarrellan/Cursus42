/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:09:33 by emontes-          #+#    #+#             */
/*   Updated: 2024/08/19 11:39:46 by emontes-         ###   ########.fr       */
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
		printf("%s", tmp[i]);
		num = ft_atoi(tmp[i]);
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
			num = ft_atoi(argv[i]);
			ft_add_back(&a, ft_stack_new(num));
			i++;
		}
	}
	return (a);
}
