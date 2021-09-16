#include <string.h>
#include <stdio.h>
#include <stdlib.h>



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

int main()
{

	char const *a = "Hola buenas tardes y buenas noches";
	printf("El nuevo array es ----> %s\n", ft_substr(a, 10, 5));
   return (0);	
}
