#include "libft.h"


size_t ft_strlen( char *s);


char *ft_strdup(const char *s1)
{
	char *copy;
	char *aux1;
	size_t size;
	char *aux;

	aux1 = (char *) s1;
	size = ft_strlen(aux1);
	copy = malloc(size + 1);
	aux = copy;


	while (*s1)
	{
		*aux++ = *s1++;
	}
	*aux = '\0';
	free(copy);
	return (copy);
}


