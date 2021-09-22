#include "libft.h"



char *ft_substr(char const *s, unsigned int start, size_t len)
{

	char *new;
	char *aux;
	int i;

	aux = (char *) s;
	new = malloc((len + 1) * sizeof(char));
	i = 0;

	if (!new)
		return (NULL);

	if ((size_t) start > ft_strlen(aux))
		return (ft_strdup(""));

	while(s[start] != '\0' && len > 0)
	{
		new[i] = s[start];
		i++;
		start++;
		len--;
	}
	new [i] = '\0';
	return (new);
}

