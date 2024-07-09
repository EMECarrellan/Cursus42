/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:20:56 by emontes-          #+#    #+#             */
/*   Updated: 2024/07/09 15:49:44 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_buffer(int fd, char *buf)
{
	char	*aux;
	char	*aux_buf;
	int		i;

	i = 1;
	aux = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!aux)
		return (0);
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
		return (0);
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] != '\0')
		i++;
	aux = malloc(i + 1 * sizeof(char));
	if (!aux)
		return (0);
	aux = ft_strlcpy_get(aux, buf, i + 1);
	aux[i] = 0;
	return (aux);
}

char	*get_remainder(char *buf)
{
	char	*remainder;
	int		i;

	if (!buf)
		return (0);
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		i++;
	if (buf[i] == 0)
	{
		free (buf);
		return (0);
	}
	remainder = ft_strdup_get(buf + i);
	free (buf);
	return (remainder);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buf[__FD_SETSIZE];

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	buf[fd] = get_buffer(fd, buf[fd]);
	if (!buf[fd])
		return (0);
	line = get_line(buf[fd]);
	buf[fd] = get_remainder(buf[fd]);
	return (line);
}
// #include <stdio.h>

// int main ()
// {
// 	int	fd = open("prueba.txt", O_RDONLY);
// 	int	fd2 = open("prueba_2.txt", O_RDONLY);
// 	char *mander = NULL;
// 	char *meleon = NULL;

// 	printf("%s", mander = get_next_line(fd));
// 	free(mander);
// 	printf("%s", mander = get_next_line(fd2));
// 	free (meleon);
// 	printf("%s", mander = get_next_line(fd2));
// 	free (meleon);
// 	printf("%s", mander = get_next_line(fd));
// 	free (mander);
// 	close(fd);
// }
