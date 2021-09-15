#include <string.h>
#include <stdio.h>




int compare( const char *a, const char *b)
{
	while(*a && *b)
	{
		if (*a != *b)
			return (0);
		a++;
		b++;
	}
	return (1);
}


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
//	const char* aux;

	i = 0;
	j = 0;

	if (needle[0] == '\0')
		return (char *)haystack;

	while (*haystack != '\0' && len > 0)
	{
		if (*haystack == *needle && compare(haystack, needle))
		{
			return ((char *)needle);
		}
		haystack++;
		len--;
	}
	
	return (NULL);
}


int main()
{

	const char *a = "hola buenas tardes";
	const char *b = "tardes";
	size_t len = 30;


	printf("%s\n", strnstr(a, b, len));
	printf("%s\n", ft_strnstr(a, b, len));
	return (0);
}
