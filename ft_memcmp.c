#include <stdio.h>
#include <string.h>


int ft_memcmp (const void *s1, const void *s2, size_t n)
{
	char *a;
	char *b;
	int r;
	size_t i;

	a = (char *) s1;
	b = (char *) s2;

	i = 0;
	r = 0;

	while (a[i] != '\0' && i <=n )
	{
		if (a[i] != b[i])
		{
			r = a[i] - b[i];
			break;
		}
		i++;
	}
	return (r);
}

int main ()
{
	char *a = "hola";
	char *b = "holo";
	printf("%d\n", memcmp(a, b, 5));
	printf("%d\n", ft_memcmp(a, b, 5));
	return (0);
}
