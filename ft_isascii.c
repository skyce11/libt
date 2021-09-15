#include <stdio.h>

int ft_isascii(int c)
{
	int i = 0;
	if (c >= 0 && c <= 0177)
		i = 1;
	return (i);
}

int main()
{
	printf("%d\n", ft_isascii(200));
	return (0);
}
