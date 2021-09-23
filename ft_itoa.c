#include "libft.h"


char*	ft_rev_int_tab(char *tab, int size)
{
	char	temporal;
	int	i;

	i = -1;
	while (++i < size / 2)
	{
		temporal = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temporal;
	}
	return (tab);
}


int int_len (int c)
{
	int i;
	i = 0;

	while (c != 0)
	{
		c = c/10;
		i++;
	}
	return (i);
}










char * ft_itoa(int n)
{
	char *aux;
	int res;
	int i;


	i = 0;
	res = 0;
	aux = malloc (sizeof(char) * (int_len(n) +1));

	while (n != 0)
	{
		res = n % 10;
		aux[i] = res + 48;
		n = n /10;
		i++;
	}
	aux =ft_rev_int_tab(aux, int_len(n));

	return (aux);

}

int main()
{
	 int c = 45678;
	 printf("%d\n", int_len(c));
	 printf("%s\n", ft_itoa(c));
	 return (0);
}
