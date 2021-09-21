#include "libft.h"



size_t ft_strlen(char *s);

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
	char *auxs1 = (char *) s1;
	char *auxs2 = (char *) s2;
	char *result;
	 result = malloc(ft_strlen(auxs1) + ft_strlen(auxs2) + 1);
	 if (*result)
	 {
		 ft_strcpy(result, s1);
		 ft_strcat(result, s2);
	 }
	 free(result);
	return (result);
}

