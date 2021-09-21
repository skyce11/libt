#include "libft.h"

void ft_bzero(void *s, size_t size);


void *ft_calloc (size_t count, size_t size)
{
	int i;

	i = 0;

	void *p;
	char *aux;


	p = malloc(count * size);
	aux = (char *) p;
	while(*aux)
	{
		ft_bzero(aux, size);
		aux++;

	}
	free(p);
	return (p);
}
