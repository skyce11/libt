#include "libft.h"



/*
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

*/
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;

	if (needle[0] == '\0')
		return ((char *) haystack);

	while(haystack[h] != '\0')
	{
		n = 0;

		while (haystack[h + n] == needle [n] && (n + h) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *) haystack + h);
		h++;
	}
	return (0);
}


