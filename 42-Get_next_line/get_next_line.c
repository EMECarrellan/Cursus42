/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:20:56 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/27 15:14:41 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(int fd, char	*buf)
{
	char	*line;

	line = ft_calloc_get(BUFFER_SIZE, sizeof(char));
	read(fd, line, BUFFER_SIZE);
	return (line);
}


char	*get_next_line(int fd)
{
	char	*buf;

	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || fd < 0)
		return (0);
	buf = ft_calloc_get(BUFFER_SIZE, sizeof(char));
	buf = get_line(fd, buf);
	return (buf);
}

int main (void)
{
	int fd = open("prueba.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
}
