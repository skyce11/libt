#include "libft.h"


int ft_strncmp (const char *s1, const char *s2, size_t n)
{
	int r;
	size_t i;

	i = 0;
	r = 0;


	if (s1[0] == '\0')
		r = s1[0] - s2[0];

	while (s1[i] != '\0' && i <= n)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (r);
}


