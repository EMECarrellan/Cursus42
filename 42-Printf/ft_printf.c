/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:16:32 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/15 11:14:47 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkflags(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'p')
		return (ft_putnbr_base((unsigned long int)va_arg(args, void *), c));
	else if (c == 'x' || c == 'X' || c == 'u')
		return (ft_putnbr_base((unsigned int)va_arg(args, void *), c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (*str)
	{
		while (*str && *str != '%')
		{
			len += ft_putchar(*str);
			str++;
		}
		if (*str && *str == '%')
			str++;
		if (*str)
		{
			len += ft_checkflags (*str, args);
			str++;
		}
	}
	va_end (args);
	return (len);
}
