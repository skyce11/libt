#include "libft.h"



char *ft_strmapi (char const *s, char (*f) (unsigned int, char))
{
	unsigned int i;
	char *aux;


	i = 0;
	aux = ft_strdup(s);
	if (!aux)
		return (0);

	while (s[i])
	{
		aux[i] = (*f) (i, aux[i]);
		i++;
	}

	return (aux);

}

