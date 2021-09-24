#include "libft.h"

size_t ft_strlen( char *s);

char * ft_strrchr(const char *s, int c)
{
	int i;
	char *aux = (char *) s;

	i = ft_strlen(aux);
	while ( i>=0)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);

}

