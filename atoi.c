#include <stdio.h>
#include <stdlib.h>




int ft_isdigit(int c)
{
	int i;

	i = 0;

	if (c >= '0' && c <= '9')
		i = 1;

	return (i);
}

int ft_atoi(const char *str)
{
	int i;
	int s;
	int res;


	i = 0;
	s = 1;
	res = 0;
	
		if (str[0] == '-')
		{
			s *= -1;
			i++;
		}

	while (str[i] != '\0' && ft_isdigit(str[i]))
//	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res *s);
}



int main ()
{
	const char *prueba = "-2147483650";
	printf("%d\n", ft_atoi(prueba));
	printf("%d\n", atoi(prueba));
	return (0);
}
