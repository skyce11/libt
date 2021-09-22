#include "libft.h"



void ft_bzero(void *s, size_t n)
{

	size_t i;
	unsigned char *aux;

	i = 0;
	aux = (unsigned char*)s;

	while (i < n)
	{
		aux[i] = 0;
		i++;
	}

	s = aux;

}


