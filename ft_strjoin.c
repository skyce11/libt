#include <stdlib.h>
#include <stdio.h>
#include <string.h>




unsigned long ft_strlen(char *s)
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


char * ft_strlcat( const char *dst, const char *src)
{
	int i;
	int j;
	char *aux;

	aux = (char*) dst;
	i = 0;
	j = 0;

	while(aux[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		aux[i] = src[j];
		i++;
		j++;
	}
	aux[i] = '\0';
	printf("%s\n", aux);
	return (aux);

}
/*
char *ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	new =ft_strlcat(s1, s2);
	return (new);
}
*/
int main()
{

	char *au = NULL;;
	char const *a = "Buenas tardes";
	char const *b = "Buenas noches";
	aux = malloc(ft_strlen(ft_strlcat(a, b)) * sizeof(char));
	aux = ft_strlcat(a, b);
	printf("Primera prueba ---> %s\n", aux);
	return (0);
}
