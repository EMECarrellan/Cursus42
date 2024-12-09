/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:07 by emontes-          #+#    #+#             */
/*   Updated: 2024/12/09 20:48:21 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <signal.h>

void	send_encrypt(char c, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(200);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	if (argc != 3)
	{
		ft_printf("invalid arguments\n");
		return (1);
	}
	else
	{
		i = 0;
		pid = ft_atoi(argv[1]);
		if (!ft_isdigit(*argv[1]))
		{
			ft_printf("Please, introduce a valid server PID\n");
			return (1);
		}
		while (argv[2][i] != '\0')
			send_encrypt(argv[2][i++], pid);
		send_encrypt('\n', pid);
		send_encrypt('\0', pid);
	}
	return (0);
}
