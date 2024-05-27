/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:06:05 by emontes-          #+#    #+#             */
/*   Updated: 2024/05/27 11:36:57 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>

char	*get_next_line(int fd);
int		ft_strlen_get(char *str);
char	*ft_strlcpy_get(char *dest, char *src, size_t destsize);
char	*ft_strdup_get(char *s1);
char	*ft_strjoin_get(char *s1, char *s2);
char	*ft_strchr_get(char *s, int c);
void	*ft_calloc_get(size_t count, size_t size);

#endif