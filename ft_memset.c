#include <stdlib.h>
#include <string.h>




size_t ft_strlen(const char *p)
{
	size_t i;
	i = 0;
	
	while (p[i] != '\0')
	{
		i++;
	}
	return (i);
}

void *ft_memset (void *s, int c, size_t n)
{
	unsigned char *p;

	p = s;
	

	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return(s);
}



