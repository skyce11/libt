#include "libft.h"


void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			 i;

	aux = (unsigned char *) s;
	i = 0;

	while (i < n)
	{
		if (aux[i] == (unsigned char) c)
			return (aux + i);
		i++;
	}
	return (0);
}
