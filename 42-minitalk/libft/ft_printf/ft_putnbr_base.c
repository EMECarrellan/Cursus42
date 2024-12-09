/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:05:39 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/15 11:18:51 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_countnbr(unsigned long n, unsigned long n_base)
{
	int	i;

	i = 1;
	while (n >= n_base)
	{
		n /= n_base;
		i++;
	}
	return (i);
}

static void	ft_putbase(unsigned long nbr, char *base, unsigned long n_base)
{
	if (nbr >= n_base)
		ft_putbase((nbr / n_base), base, n_base);
	ft_putchar(base[nbr % n_base]);
}

int	ft_putnbr_base(unsigned long int nbr, char c)
{
	int				i;
	unsigned int	n_base;
	char			*base;

	i = 0;
	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	else if (c == 'p')
		i += ft_putstr("0x");
	else if (c == 'u')
		base = "0123456789";
	n_base = ft_strlen_print(base);
	ft_putbase(nbr, base, n_base);
	i += ft_countnbr(nbr, n_base);
	return (i);
}
