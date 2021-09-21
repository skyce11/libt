#include "libft.h"


void ft_putendl_fd(char *s, int fd)
{
	int i;
	char a;

	a = '\n';
	i = -1;

	while(s && s[++i])
	{
		write(fd, &s[i], 1);
	}
	write(fd, &a, 1);
}

