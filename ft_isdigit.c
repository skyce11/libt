#include <stdio.h>

int ft_isdigit(int c)
{
	int i;

	i = 0;

	if (c >= '0' && c <= '9')
		i = 1;

	return (i);
}

int main()
{
	printf("%d\n", ft_isdigit('a'));
	return (0);
}
