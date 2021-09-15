#include <stdio.h>
#include <string.h>


char *ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char*)s);
		}
		s++;
		
	}

	if (*s == c)
	{
		return ((char*)s);
	}

	return (NULL);
}


int main()
{
	const char *a = "hola buenas tardes";
	int b = '\0';

	printf("%s\n", strchr(a, b));
	printf("%s\n", ft_strchr(a, b));
	return (0);
}
