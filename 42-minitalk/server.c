/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:13 by emontes-          #+#    #+#             */
/*   Updated: 2024/12/09 20:10:52 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <signal.h>

void	signal_handler(int signum)
{
	static char	c;
	static int	bits;

	if (signum == SIGUSR1)
		c |= (1 << bits);
	if (++bits == 8)
	{
		ft_printf("%c", c);
		c = 0;
		bits = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("Server PID= %d\n", pid);
	ft_printf("Waiting for message...\n");
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while (1)
		pause();
}
