#include <string.h>
#include <stdio.h>
#include <stdlib.h>



void ft_bzero (void *s, size_t n)
{
	char *p = s;
	int i;

	i = 0;
	while (n >0)
	{
		p = NULL;
		i++;
		n--;
	}
}

size_t ft_strlen(char *s)
{
	size_t i;

	i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}


void *ft_calloc (size_t count, size_t size)
{
	int i;

	i = 0;

	void *p;
	char *aux;


	p = malloc(count * size);
	aux = (char *) p;
	while(*aux)
	{
		ft_bzero(aux, size);
		aux++;

	}
	free(p);
	return (p);
}


int main()
{
	char *p;
	char *p1;
	char *p2;
	p = calloc(10, 5);
	p1 = ft_calloc(10, 5);
	p2 = malloc(10); 
	printf("Official calloc ---> %s\n", p);
	printf("My calloc ---> %s\n", p1);
	printf("Official malloc ---> %s\n", p2);
	return (0);
}
