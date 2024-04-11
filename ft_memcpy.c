//The  memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap.

// The memcpy() function returns a pointer to dest.

#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	
}

#include <stdio.h>
#include <string.h>
int main()
{
	char	dest[] = "Hola mundo";
	char	src[] = "Paco";
	
	char *result;
	result = memcpy(&dest[1], &dest[0], 7);
	printf("%s\n", result);
	// result = memcpy(dest, src, 2);
	// printf("%s\n", result);
	// result = memcpy(dest, src, 7);
	// printf("%s\n", result);
	// printf("%p\n", memcpy(dest, src, 1));
	// printf("%p\n", memcpy(dest, src, 2));
	// printf("%p\n", memcpy(dest, src, 3));
}