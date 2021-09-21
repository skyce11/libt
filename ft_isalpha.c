#include "libft.h"

int ft_isalpha	(int c)
{
	int i = 0;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		i = 1;

	return (i);
}

