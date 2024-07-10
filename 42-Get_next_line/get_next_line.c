/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:20:56 by emontes-          #+#    #+#             */
/*   Updated: 2024/07/10 11:14:01 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_buffer(int fd, char *buf)
{
	char	*aux;
	char	*aux_buf;
	int		i;

	i = 1;
	aux = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!aux)
		return (NULL);
	aux[0] = 0;
	while (!ft_strchr_get(aux, '\n') && i != 0)
	{
		i = read(fd, aux, BUFFER_SIZE);
		if (i == -1)
		{
			free(aux);
			free(buf);
			return (NULL);
		}
		aux[i] = 0;
		aux_buf = buf;
		buf = ft_strjoin_get(buf, aux);
		free(aux_buf);
	}
	free (aux);
	return (buf);
}

char	*get_line(char *buf)
{
	char	*aux;
	int		i;

	if (!buf)
		return (NULL);
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] != '\0')
		i++;
	aux = malloc(i + 1 * sizeof(char));
	if (!aux)
		return (NULL);
	aux = ft_strlcpy_get(aux, buf, i + 1);
	aux[i] = 0;
	return (aux);
}

char	*get_remainder(char *buf)
{
	char	*remainder;
	int		i;

	if (!buf)
		return (NULL);
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		i++;
	if (buf[i] == 0)
	{
		free (buf);
		return (NULL);
	}
	remainder = ft_strdup_get(buf + i);
	free (buf);
	return (remainder);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buf;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	buf = get_buffer(fd, buf);
	if (!buf)
		return (NULL);
	line = get_line(buf);
	if (!line || line[0] == '\0')
	{
		if (line)
			free(line);
		return (NULL);
	}
	buf = get_remainder(buf);
	return (line);
}

#include <stdio.h>

int main() {
	int fd = open("prueba.txt", O_RDONLY);
	char *mander = NULL;

	printf("%s", mander = get_next_line(-1));
	free(mander);
	printf("%s", mander = get_next_line(fd));
	free(mander);
	close(fd);
}