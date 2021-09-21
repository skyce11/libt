#include "libft.h"



char *ft_substr(char const *s, unsigned int start, size_t len)
{

	char *new;
	int i;

	new = malloc(len * sizeof(char));
	i = 0;

	while(s[start] != '\0' && len > 0)
	{
		new[i] = s[start];
		i++;
		start++;
		len--;
	}
	free(new);
	return (new);
}

