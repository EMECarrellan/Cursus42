/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:20:56 by emontes-          #+#    #+#             */
/*   Updated: 2024/07/08 11:43:29 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "unistd.h"

char	*get_buffer(int fd, char *buf)
{
	char	*aux;
	// char	*aux_buf;
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
	{
		free (aux);
		return (0);
	}
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] != '\0')
		i++;
	aux = ft_strlcpy_get(aux, buf, i);
	aux[i] = 0;
	return (aux);
}

char	*get_remainder(char *buf)
{
	char	*aux;
	char	*remainder;

	aux = buf;
	if (!aux)
		return (0);
	while (*aux && *aux != '\n')
		aux++;
	if (*aux != '\0')
		aux++;
	remainder = ft_strdup_get(aux);
	return (remainder);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*aux_line;
	static char	*buf;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	buf = get_buffer(fd, buf);
	line = get_line(buf);
	if (!buf)
	{
		free (line);
		return (0);
	}
	if (line[0] != '\0')
	{
		aux_line = line;
		line = ft_strjoin_get(line, "");
		free(aux_line);
	}
	buf = get_remainder(buf);
	return (line);
}

// int main (void)
// {
// 	int fd = open("prueba.txt", O_RDONLY);
// 	char *mander = NULL;

// 	printf("%s", mander = get_next_line(fd));
// 	free(mander);
// 	printf("%s", mander = get_next_line(fd));
// 	free (mander);
// 	printf("%s", mander = get_next_line(fd));
// 	free (mander);
// 	printf("%s", mander = get_next_line(fd));
// 	free (mander);
// 	printf("%s", mander = get_next_line(fd));
// 	free (mander);
// 	printf("%s", mander = get_next_line(fd));
// 	free (mander);
// 	printf("%s", mander = get_next_line(fd));
// 	free (mander);
// 	printf("%s", mander = get_next_line(fd));
// 	free (mander);
// 	close(fd);

// 	// mander = get_next_line(fd);
// 	// free(mander);
// 	// mander = get_next_line(fd);
// 	// free (mander);
// 	// mander = get_next_line(fd);
// 	// free (mander);
// 	// mander = get_next_line(fd);
// 	// free (mander);
// 	// mander = get_next_line(fd);
// 	// free (mander);
// 	// mander = get_next_line(fd);
// 	// close (fd);
// 	return (0);
// }
