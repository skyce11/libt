#include "libft.h"


void *ft_memcpy(void *dst, const void *src, size_t n)
{
	 char *a;
	 const char *b;

	 a = (char *) dst;
	 b = (const char *) src;

	 if ((dst == src) || n == 0)
		 return (dst);

	 if (!dst && !src)
		 return (0);

	 while (n--)
		 a[n] =  b[n];
	return (dst);
}

