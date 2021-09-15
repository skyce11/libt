#include <stdio.h>
#include <string.h>

unsigned long ft_strlen( char *s)
{
	int i;
	unsigned long r;

	i = 0;
	r = 0;
	while(s[i] != '\0')
	{
		i++;
		r++;

	}
	return (r);
}

int main ()
{
	printf ("%lu\n", strlen(" "));
	printf ("%lu\n", ft_strlen(" "));
	return (0);
}
