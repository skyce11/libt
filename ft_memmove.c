#include <string.h>
#include <stdio.h>


int main()
{
	const char src[50] = "Hola buenas tardes y mañanas";
	char dst[50];
	strcpy(dst, "helloooooo");
	printf("Before memmove dest = %s\n", dst);
	memmove(dst, src, strlen(src) + 1);
	printf("after memmove dest = %s\n", dst);
	return (0);
}
