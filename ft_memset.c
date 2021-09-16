#include <stdlib.h>
#include <string.h>




size_t ft_strlen(const char *p)
{
	size_t i;
	i = 0;
	
	while (p[i] != '\0')
	{
		i++;
	}
	return (i);
}

void *ft_memset (void *s, int c, size_t n)
{
	unsigned char *p;

	p = s;
	

	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return(s);
}



int main ()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	
	printf("\nBefore memset(): %s\n", str);
	memset(str + 13, '.', 8*sizeof (char));
	printf("After memset(): %s", str);
	ft_memset(str + 13, '.', 8*sizeof(char));
	printf("\nAfter my memset(): %s\n", str);
	return (0);


}
