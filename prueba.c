#include "libft.h"
#include <stddef.h>
#include <string.h>

#include <stdio.h>
int main (void)
{
	char dest[] = "hola";
	char *src = "mundo";
	printf("%ld\n", strlcat(dest, src, 1));
	return (0);
}