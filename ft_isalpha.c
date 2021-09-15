#include <stdio.h>
#include <unistd.h>

int ft_isalpha	(int c)
{
	int i = 0;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		i = 1;

	return (i);
}

int main ()
{
	printf("%d\n", ft_isalpha(26));
	return (0);

}
