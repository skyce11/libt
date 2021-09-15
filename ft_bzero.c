#include <string.h>
#include <stdio.h>



int ft_strlen(const char *p)
{
	int i;

	i = 0;

	while (p[i] != '\0')
	{
		i++;
	}
	return (i);
}

void ft_bzero(void *s, size_t n)
{
	char *p = s;
	int i;

	i = 0;
	
	while(n > 0)
	{
		p = NULL;
		i++;
		n--;
	}

}


int main()
{

	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore bzero(): %s\n", str);

	bzero(str + 13, 8*sizeof(char));
	printf("\nAfter bzero(): %s\n", str);
	ft_bzero(str + 13, 8 * sizeof(char));
	printf("\nAfter my bzero(): %s\n", str);

}
