#include "libft.h"


/*
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
*/



char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1_len;
	size_t s2_len;
	size_t tot_len;
	char *aux;
	char *aux_len1;
	char *aux_len2;


	aux_len1 = (char *) s1;
	aux_len2 = (char *) s2;
	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));

	s1_len = ft_strlen(aux_len1);
	s2_len = ft_strlen(aux_len2);
	tot_len = s1_len + s2_len +1;
	aux = malloc(sizeof(char) * tot_len);
	if (!aux)
		return (0);
	ft_memmove(aux, s1, s1_len);
	ft_memmove(aux + s1_len, s2, s2_len);
	aux[tot_len - 1] = '\0';
	return (aux);


}

