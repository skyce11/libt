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


//	if (dstsize <= ft_strlen(dst))
//		return (dstsize + ft_strlen(a));

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

int main()
{
	char src[50] = "This is the source";
	char dst [50] = "This is the destination";
	printf("Before official strlcat: %s\n", dst);
	strlcat(dst, src, 50);
	printf("After official strlcat:: %s\n", dst);
	char src1[50] = "This is th source";
	char dst1[50] = "This is the destination";
	printf("Before my strlcat: %s\n", dst1);
	ft_strlcat(dst1, src1, 50);
	printf("After my strlcat: %s\n", dst1);
}
