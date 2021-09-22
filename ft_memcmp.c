#include "libft.h"


int ft_memcmp (const void *s1, const void *s2, size_t n)
{
	const unsigned char *aux1;
	const unsigned char *aux2;
	size_t i;

	i = 0;
	aux1 = (const unsigned char *) s1;
	aux2 = (const unsigned char *) s2;

	while ( i < n)
	{
		if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
	}
	return (0);
}
