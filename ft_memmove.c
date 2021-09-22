#include "libft.h"

void *ft_memmove( void *dst, const void *src, size_t len)
{
	char *a;
	char *b;

	a = (char *) dst;
	b = (char *) src;

	if (dst == src)
		return (dst);

	if ( b < a)
	{
		while (len--)
			*(a + len) = *(b + len);
		return (dst);
	}
	while (len--)
		*a++ = *b++;

	return (dst);
}
