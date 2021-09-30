/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:35:44 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/30 15:55:25 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *) dst;
	b = (char *) src;
	if (dst == src)
		return (dst);
	if (b < a)
	{
		while (len--)
			*(a + len) = *(b + len);
		return (dst);
	}
	while (len--)
		*a++ = *b++;
	return (dst);
}
