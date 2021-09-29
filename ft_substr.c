/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:40:41 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/29 13:02:16 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}



/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t		i;

	new = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!s)
	{
		return (NULL);
	}
	if (!new)
		return (0);
	if ((size_t) start > ft_strlen((char *)s))
		return (ft_strdup(""));
	while (s[start] && len > 0)
	{
		new[i] = s[start];
		i++;
		start++;
		len--;
	}
	new [i] = '\0';
	return (new);
}*/
