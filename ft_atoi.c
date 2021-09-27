/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:29:52 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 10:29:54 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"


/*
int checkoverflow (unsigned long n, int neg)
{
	
}

*/
int ft_atoi(const char *str)
{
	int i;
	int s;
	int res;


	i = 0;
	s = 1;
	res = 0;

while ((str[i] == 32) || ( str[i] == ' ') || (str[i] == '\f') || (str[i] == '\n')
		|| (str[i] == '\r') || (str[i] == '\t') || (str[i] == '\v'))
	{
		i++;
	}

	

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			s *= -1;
			
		}
		i++;
	}

	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res *s);
}


