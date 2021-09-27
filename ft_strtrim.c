/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:40:31 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 10:40:32 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"

int bool_set (char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);

	return (0);
}


char *ft_strtrim (char const *s1, char const *set)
{
	size_t start;
	size_t end;
	char *aux;
	char *aux_len;

	aux_len = (char *) s1;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));


	start = 0;
	end = ft_strlen(aux_len);

	while (bool_set(s1[start], set) == 1)
	{
		start++;
	}

	while (bool_set(s1[end - 1], set) == 1)
		end--;



	aux = ft_substr(s1, start, end - start);
	return (aux);
}
