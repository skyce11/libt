#include <stdlib.h>
#include <stdio.h>
#include <string.h>




unsigned long ft_strlen(char const *s)
{
	int i;
	unsigned long r;
	i = 0;
	r = 0;
	while (s[i] != '\0')
	{
		i++;
		r++;
	}
	return (r);
}

char *ft_strcpy(char *dest, const char *src)
{
	int a;

	a = 0;
	while(src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}


char *ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while(dest[j] != '\0')
		j++;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}




char *ft_strjoin(char const *s1, char const *s2)
{
	char *result;
	 result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	 if (*result)
	 {
		 ft_strcpy(result, s1);
		 ft_strcat(result, s2);
	 }
	 free(result);
	return (result);
}

int main()
{

	char const *a = "Buenas tardes";
	char const *b = "Buenas noches";
	printf("Primera prueba ---> %s\n", ft_strjoin(a, b));
	return (0);
}
