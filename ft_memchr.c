#include "libft.h"


void *ft_memchr (const void *s, int c, size_t n)
{
	unsigned char *a;

	a = (unsigned char *) s;

	while (*a != '\0' && n > 0)
	{
		if (*a == c)
		{
			return (a);
		}
		a++;
		n--;
	}
	if (*a == c)
	{
		return ((void *)s);
	}
	return (NULL);
}
