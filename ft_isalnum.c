#include "libft.h"

int ft_isalnum(int c)
{
	int i = 0;

	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z'))
		i = 1;

	return (i);
}	
