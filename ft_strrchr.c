/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:40:17 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 10:40:18 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include "libft.h"

size_t ft_strlen( char *s);

char * ft_strrchr(const char *s, int c)
{
	int i;
	char *aux = (char *) s;

	i = ft_strlen(aux);
	while ( i>=0)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);

}

