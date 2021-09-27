/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:31:48 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 11:09:23 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"

int char_len (char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

int reverse(int n)
{
	int rev;
	int res;

	rev = 0;

	while (n != 0)
	{
		res = n%10;
		n = n /10;
		rev = rev *10 + res;
	}
	return (rev);
}









char * ft_itoa(int n)
{
	char *aux;
	int res;
	int i;
	int n_aux;

	n_aux = reverse(n);


	i = 0;
	res = 0;
	aux = malloc (sizeof(char) * (int_len(n_aux) +1));
	if (!aux)
		return (0);


	if (n_aux < 0)
	{
		aux[i] = '-';
		n_aux = - n_aux;
		i++;
	}
	if (n == 0)
		aux[i] = '0';

	while (n_aux != 0)
	{
		res = n_aux % 10;
		aux[i] = res + 48;
		n_aux = n_aux /10;
		i++;
	}
	aux[i] = '\0';
//	aux =ft_rev_int_tab(aux, int_len(n));

	return (aux);

}

int main()
{
	char *c = "7654567";

	 c = malloc(char_len(c) * sizeof(char));
	 
	 printf("Main --- >%s\n", ft_rev_int_tab(c, char_len(c)));
	 return (0);
}
