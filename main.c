#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


//int ft_isdigit(int c);
//int ft_atoi(const char *str);
//int ft_bzero(void*s, size_t n);
//void *ft_calloc(size_t count, size_t size);
//int ft_isalnum(int c);
//int ft_isalpha(int c);
//int ft_isascii(int c);
//int ft_isprint(int c);
//void *ft_memchr(const void *s, int c, size_t n);
//int ft_memcmp(const void *s1, const void *s2, size_t  n);
//void *ft_memcpy(void *dst, const void *src, size_t n);
//void *ft_memset(void *s, int c, size_t n);
//void ft_putchar_fd(char c, int fd);
//void ft_putendl_fd(char *s, int fd);
//void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);


int main()
{
	/*
	printf("PRUEBAS ATOI\n");
	const char *prueba = "45678765";
	printf("ATOI OFICIAL ---> %d\n", atoi(prueba));
   printf("MI ATOI ----> %d\n", ft_atoi(prueba));	
   return (0);
   */


/*

	printf("PRUEBAS BZERO\n");
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore bzero(): %s\n", str);

	bzero(str + 13, 8*sizeof(char));
	printf("\nAfter official bzero() ----> %s\n", str);
	ft_bzero(str + 13, 8 * sizeof(char));
	printf("\nAfter my bzero() ----> %s\n", str);
	return (0);
	*/

	/*
	printf("PRUEBAS CALLOC\n");
	char *p = "hola";
	char *p1 = "hola";
	p = calloc(10, 5);
	p1 = ft_calloc(10, 5);
	printf("Official calloc ----> %s\n", p);
	printf("My calloc ----> %s\n", p1);
	return (0);
	*/

	/*
	printf("PRUEBAS ISALNUM\n");
	printf("%d\n", ft_isalnum('8'));
	return (0);
	*/

	/*
	printf("PRUEBAS ISALPHA\n");
	printf("%d\n", ft_isalpha(26));
	return (0);
	*/

	/*
	printf("PRUEBAS ISASCII\n");
	printf("%d\n", ft_isascii(200));
	return (0);
	*/

	/*
	printf("PRUEBAS ISDIGIT\n");
	printf("%d\n", ft_isdigit('a'));
	return (0);
	*/


	/*
	printf("PRUEBAS ISPRINT\n");
	printf("%d\n", ft_isprint(0263));
	return (0);
	*/

	/*
	printf("PRUEBAS MEMCHR\n");
	char *a = "hola buenass tardes";
	int b = 'z';
	printf("Official memchr ----> %s\n", memchr(a, b, strlen(a)));
	printf("My memchr ----> %s\n", ft_memchr(a, b, strlen(a)));
	return (0);
	*/

	/*
	printf("PRUEBAS MEMCMP\n");
	char *a = "hola";
	char *b = "holo";
	printf("Official memcmp ----> %d\n", memcmp(a, b, 5));
	printf("My memcmp ----> %d\n", ft_memcmp(a, b, 5));
	return (0);
	*/

	/*
	printf("PRUEBAS MEMCPY\n");
	const char src1[50] = "hola buenas tardes y mañanas";
	const char src[50] = "hola buenas tardes y mañanas";
	char dest[50];
	char dest1[50];
	strcpy(dest, "hellooooo");
	strcpy(dest1, "helloooo");
	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, strlen(src) + 1);
	printf("After memcpy dest = %s\n", dest);
	printf("Before my memcpy des1 = %s\n", dest1);
	ft_memcpy(dest1, src1, strlen(src1) + 1);
	printf("After my my memcpy dest = %s\n", dest1);
	return (0);
	*/


	/*
	printf("PRUEBAS MEMSET\n");
	char str[50] ="GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset() ----> %s\n", str);
	memset(str + 13, '.', 8 * sizeof(char));
	printf("After memset() ----> %s\n", str);
	ft_memset(str + 13, '.', 8 * sizeof(char));
	printf("\nAfter my memset() ----> %s\n", str);
	return (0);

	*/

	/*
	printf("PRUEBAS FT_PUTCHAR_FD");
	char a = 't';
	int fd = 0;
	write(1, ft_putchar_fd(a, fd), 2);
	return (0);

	*/

	/*
	printf("PRUEBAS FT_PUTENDl_FD\n");
	int fd = 0;
	char *aux =  fd;
	char *s = "Hola buenas tardes";
	ft_putendl_fd(s, fd);
	printf("%s\n", aux);
	return (0);
	*/

	/*
	printf("PRUEBAS FT_PUTNBR_FD\n");
	int fd = 0;
	int i = 56789;
	ft_putnbr_fd(i, fd);
	printf("%d\n", fd);
	return (0); 
	*/

	printf("PRUEBAS FT_PUTSTR\n");
	int fd = 2;
	char *s = "Hola buenas tardes";
	ft_putstr_fd(s, fd);
	printf("%d\n", fd);
	return (0);




}
