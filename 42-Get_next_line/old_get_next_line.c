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

char *ft_get_buf (int fd)
{
    size_t		len;
	static char	*buf;
	char		*aux_buf;
    char        *temp;

	buf = (char *)calloc(BUFFER_SIZE, sizeof(char));
	if (!buf)
		return (0);
	len = read (fd, buf, BUFFER_SIZE);
    if (len <= 0)
    {
        free (buf);
        return (0);
    }
	aux_buf = buf;
	while (*buf != '\n' && *buf)
		buf++;
    if (*buf == '\n')
        buf++;
    temp = (char *)calloc(buf - aux_buf + 1, sizeof(char));
	ft_strlcpy_get(temp, aux_buf, ft_strlen_get(buf) - ft_strlen_get(aux_buf));
    aux_buf = ft_strdup_get(buf);
	return (temp);
}

char	*get_next_line(int fd)
{
    char    *str;
    char    *line;
    char    *tmp;
    str = ft_get_buf(fd);
    line = str;
    while (*str && *str != '\n')
    {
        str = ft_get_buf(fd);
        if (str)
        {
            tmp = line;
            line = ft_strjoin_get(line, str);
            free(tmp);
        }
        
    }
    return (line);
}

int main ()
{
	int		fd;
	char	*str;

	fd = open ("prueba.txt", O_RDONLY);
	if (fd < 0)
		return (1);
    // while ((str = get_next_line(fd)) != NULL)
    // {
        str = get_next_line(fd);
        printf("%s", str);
                str = get_next_line(fd);
        printf("%s", str);
                str = get_next_line(fd);
        printf("%s", str);
                        str = get_next_line(fd);
        printf("%s", str);
    // }
	close (fd);
}