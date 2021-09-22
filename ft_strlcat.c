#include "libft.h"


size_t ft_strlen(char *s);

size_t ft_strlcat( char* dst, const char* src, size_t dstsize)
{
	size_t c;
	size_t d;
	char *aux;

	aux = (char *) src;



	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen((aux)));

	c = ft_strlen(dst);
	d = 0;

	while (aux[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = aux[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&aux[d]));
}

