#include "libft.h"


size_t ft_strlen( char *s);


char *ft_strdup(const char *s1)
{
	char *aux;
	char *aux1;
	size_t len;

	aux1 = (char *) s1;
	len = ft_strlen(aux1) + 1;
	aux = malloc (sizeof(char) * len);
	if (!aux)
		return (0);
	aux = ft_memcpy(aux, aux1, len);
	return (aux);
}


