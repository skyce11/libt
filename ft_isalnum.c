#include <stdio.h>

int ft_isalnum(int c)
{
	int i = 0;

	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z'))
		i = 1;

	return (i);
	
}

int main ()
{
	printf("%d\n", ft_isalnum('8'));
	return (0);
}
