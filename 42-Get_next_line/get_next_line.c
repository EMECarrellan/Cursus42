/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:20:56 by emontes-          #+#    #+#             */
/*   Updated: 2024/06/10 14:19:16 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_buffer(int fd, char *buf)
{
	char	*aux;
	int		i;

	i = 1;
	aux = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!aux)
		return (0);
	while (!ft_strchr_get(aux, '\n') && i > 0)
	{
		i = read(fd, aux, BUFFER_SIZE);
		aux[BUFFER_SIZE] = '\0';
		if (i == -1)
		{
			free (aux);
			break ;
		}
		buf = ft_strjoin_get(buf, aux);
	}
	free (aux);
	return (buf);
}

char	*get_line(char *buf)
{
	char	*aux;
	int		i;

	aux = ft_strdup_get(buf);
	if (!buf)
		return (0);
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] != '\0')
		i++;
	aux = ft_strlcpy_get(aux, buf, i);
	return (aux);
}

char	*get_remainder(char *buf)
{
	if (!buf)
		return (0);
	while (*buf && *buf != '\n')
		buf++;
	if (*buf != '\0')
		buf++;
	return (buf);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buf;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	buf = get_buffer(fd, buf);
	if (!buf)
		return (0);
	line = get_line(buf);
	if (line[0] != '\0')
		line = ft_strjoin_get(line, "\n");
	buf = get_remainder(buf);
	return (line);
}

int main (void)
{
	// comprobar por qué funciona mal con números grandes de buffer
	int fd = open("prueba.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
}
