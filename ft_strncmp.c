#include <stdio.h>
#include <string.h>


int ft_strncmp (const char *s1, const char *s2, size_t n)
{
	int r;
	size_t i;

	i = 0;
	r = 0;

	while (s1[i] != '\0' && i <= n)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (r);
}

int main()
{
	const char *a = "hola";
	const char *b = "holo";
	printf("%d\n", ft_strncmp(a, b, 1));
	return (0);

}
