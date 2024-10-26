/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:35:00 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/16 12:09:46 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi_ps(char *str)
{
	long int	sign;
	long int	res;

	sign = 1;
	res = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error();
		res *= 10;
		res += *str - '0';
		str++;
	}
	if ((sign == 1 && res > 2147483647) || (sign == -1 && -res < -2147483648))
		ft_error();
	return (sign * res);
}
