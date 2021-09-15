#include <stdio.h>
#include <string.h>


int ft_strlen(const char *s)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while(s[i] != '\0')
	{
		i++;
		r++;
	}
	return (r);
}



char * ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while ( i>=0)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);

}


int main()
{
	const char *a = "hola buenas tardes";

	int b = '\0';

	printf("%s\n", strrchr(a, b));
	printf("%s\n", ft_strrchr(a, b));

	return (0);
}
