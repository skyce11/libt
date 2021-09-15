#include <stdio.h>
#include <string.h>




unsigned long ft_strlen(char *s)
{
	int i;
	unsigned long r;

	i = 0;
	r = 0;
	while (s[i] != '\0')
	{
		i++;
		r++;
	}
	return (r);
}
/*
size_t ft_strlcat( char* restrict dst, const char* restrict src, size_t dstsize)
{
	unsigned int c;
	int d;

	c = ft_strlen(dst);
	d = 0;


	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (dstsize);
}

*/

int main()
{
	char src[50] = "This is the source";
	char dst [50] = "This is the destination";

	strlcat(dst, src, 15);
	printf("The result is: %s\n", dst);
}
