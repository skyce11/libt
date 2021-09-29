/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:37:36 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/29 09:44:31 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aux;
	char	*aux1;
	size_t	len;

	aux1 = (char *) s1;
	len = ft_strlen(aux1) + 1;
	aux = malloc (sizeof(char) * len);
	if (!aux)
		return (0);
	aux = ft_memcpy(aux, aux1, len);
	return (aux);
}
