#include <stdio.h>
#include <ctype.h>

int ft_toupper (int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}


int main()
{
	printf("%d\n", ft_toupper('t'));
	printf("%d\n", toupper('t'));
	return (0);
}
