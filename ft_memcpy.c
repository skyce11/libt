#include <stdio.h>
#include <string.h>


void *ft_memcpy(void *dst, const void *src, size_t n)
{
	 char *a;
	 char *b;

	 a = (char *) dst;
	 b = (char *) src;

	size_t i;

	i = 0;

	while (b[i] != '\0' && n > 0)
	{
		a[i] = b[i];
		i++;
		n--;
	}
	return (dst);
}

int main()
{
	const char src1[50] = "hola buenas tardes y mañanas";
	const char src[50] = "hola buenas tardes y mañanas";
	char dest[50];
	char dest1[50];
	strcpy(dest, "hellooooo");
	strcpy(dest1, "helloooooo");
	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, strlen(src) +1);
	printf("After memcpy dest = %s\n", dest);
	printf("Before my memcpy dest = %s\n", dest1);
	ft_memcpy(dest1, src1, strlen(src1) +1 );
	printf("after my memcpy dest = %s\n", dest1);
	return (0);

}
