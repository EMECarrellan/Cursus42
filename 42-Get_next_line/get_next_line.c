/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:06:31 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/17 13:14:49 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	size_t		len;
	char		*buf;
	char		*aux_buf;

	buf = (char *)calloc(BUFFER_SIZE, sizeof(char));
	if (!buf)
		return (0);
	len = read (fd, buf, BUFFER_SIZE);
	aux_buf = buf;
	while (*buf != '\n' && *buf)
		buf++;
	*buf = '\0';
	ft_strlen_get(buf);

	//printf("Número de caracteres del aux_buf: %d\n", ft_strlen_get(aux_buf));

	printf("Número de caracteres del buf: %d\n", ft_strlen_get(buf));
	printf("Número de caracteres del txt: %zd\n", len);

	// printf("Cadena:\n¯¯¯¯¯¯\n%s\n", buf);

	ft_strlcpy_get(buf, aux_buf, ft_strlen_get(aux_buf) - ft_strlen_get(buf));
	ft_putstr_get(aux_buf);
	return (aux_buf);
}

int main ()
{
	int		fd;
	char	*str;

	fd = open ("prueba.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	str = get_next_line(fd);
	// printf("------\n%s", str);
	close (fd);
}