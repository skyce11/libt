#include <string.h>
#include <stdio.h>
#include <stdlib.h>


size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}


char *ft_strdup(const char *s1)
{
	char *copy;
	size_t size;
	char *aux;

	size = ft_strlen(s1);
	copy = malloc(size + 1);
	aux = copy;


	while (*s1)
	{
		*aux++ = *s1++;
	}
	*aux = '\0';
	free(copy);
	return (copy);
}


int main()
{
	char array1[] = "This is the array";
	char *p;
	char *p1;
	p = strdup(array1);
	p1 = ft_strdup(array1);
	printf("Original ---->  %s\n", array1);
	printf("Official duplicated ----> %s\n", p);
	printf("My duplicated ----> %s\n", p1);
	return (0);
}
