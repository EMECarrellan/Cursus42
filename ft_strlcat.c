#include "libft.h"
#include <stddef.h>

// Concatena caracteres de src a dest y cierra la string con un nulo. Se copian de src a destino tantos caracteres como espacio haya para ellos y el nulo.
// Size debería ser la longitud de destino más el espacio para el nulo.
// Si destino no termina en nulo, destino no se modifica.
// Nunca se examinan más de size caracteres de dest.

// Devuelve la longitud de la string que intentó crear, pueda o no pueda guardarla en destino
// Si todo el source se concatenó a destino, el valor de retorno será menor que size.
// Si destino no termina en nulo, considerará que destino tendrá el tamaño de size y retornará size + la longitud de src.

// The strlcat() function appends  at most (dstsize-strlen(dst)-1)
//        characters of src to dst (dstsize being the  size of the  string buffer
//        dst). If the string pointed to by dst contains a null-terminated string
//        that fits into dstsize bytes when strlcat() is called, the string pointed
//        to by dst will be a null-terminated string that fits in dstsize bytes
//        (including the terminating null character) when it completes, and the
//        initial character of src will override the null character at  the end of
//        dst. If the string pointed to by dst is longer than dstsize bytes when
//        strlcat() is called, the string pointed to by dst will not be changed.
//        The function returns min{dstsize,strlen(dst)}+strlen(src).  Buffer
//        overflow can be checked as  follows:

//          if (strlcat(dst, src, dstsize) >= dstsize)
//                  return -1;

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
		size_t	i;
		size_t	j;

		i = ft_strlen(src);
		j = 0;
		if (ft_strlen(dest) <= size)
		{
			return (ft_strlen(src) + size);
		}
		while (src[j] && (ft_strlen(dest)) < size)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (ft_strlen(dest) + ft_strlen(src));
}

#include <stdio.h>
int main (void)
{
	char *dest = "hola";
	char *src = "mundo";
	printf("%ld\n", ft_strlcat(dest, src, 5));
	return (0);
}