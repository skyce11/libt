#include "libft.h"


void *ft_memcpy(void *dst, const void *src, size_t n)
{
	 char *a;
	 char *b;

	 a = (char *) dst;
	 b = (char *) src;

	size_t i;

	i = 0;

	while (b[i] != '\0' && n > 0)
	{
		a[i] = b[i];
		i++;
		n--;
	}
	return (dst);
}

