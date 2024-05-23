#include "get_next_line.h"

static char *ft_get_line(char *buf)
{
	int		i = 0;
	char	*line;
	while (buf[i] && buf[i] != '\n')
		i++;
	line = calloc(i + 2, sizeof(char));
	if (!line)
		return(0);
	ft_strlcpy_get(line, buf, i + 2);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*aux;
	char        *line = "";

	buf = calloc(BUFFER_SIZE, sizeof(char));
	if (!buf)
		return (0);
	while (read (fd, buf, BUFFER_SIZE))
	{
		if (fd <= 0)
		{
			free (buf);
			return (0);
		}
		if (ft_strchr_get(buf, '\n'))
		{
			line = ft_strjoin_get(line, "\n");
			return (line);
		}
		aux = ft_get_line(buf);
		//printf(" aux = %s", aux);
		line = ft_strjoin_get(line, aux);
	}
	//printf("\naux = %s", aux);
	//printf("line = %s", line);
	return (line);
}

// int main()
// {
// 	int fd = open("prueba.txt", O_RDONLY);
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	close (fd);
// 	return 0;
// }