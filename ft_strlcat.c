#include "libft.h"


size_t ft_strlen(char *s);

size_t ft_strlcat( char* dst, const char* src, size_t dstsize)
{
	unsigned int c;
	int d;
	int j;
	char *a;

	c = ft_strlen(dst);
	d = 0;
	a = (char*) src;
	j = 0;



	while (dst[d] != '\0')
	{
		d++;
	}
	while (src[j] != '\0' && c + 1 < dstsize)
	{
		dst[d] = src[j];
		d++;
		j++;
	}
	dst[d] = '\0';
	return (dstsize);
}

