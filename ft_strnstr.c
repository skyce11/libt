#include "libft.h"




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


