#include "libft.h"



size_t ft_strlcpy (char* restrict dest, const char* restrict src, size_t dstsize)
{
	unsigned int count;
	unsigned int index;


	count = 0;
	index = 0;

	while (src[count] != '\0')
		count++;
		if (dstsize != 0)
		{
			while (src[index] != '\0' && index < (dstsize - 1))
			{
				dest[index] = src[index];
				index++;
			}
			dest[index] = '\0';
		}
		return (count);
		}



