#include <stdio.h>
#include <string.h>


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


int main ()
{
	char *a = "holas buenas tardes";
	int b = 'z';
	
	printf("%s\n", memchr(a, b, strlen(a)));
	printf("%s\n", ft_memchr(a, b, strlen(a)));
	return (0);;
}
