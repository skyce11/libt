/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:39:02 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 10:39:04 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"



size_t ft_strlcpy (char* restrict dest, const char* restrict src, size_t dstsize)
{
	unsigned int count;
	unsigned int index;


	count = 0;
	index = 0;

	while (src[count] != '\0')
		count++;
		if (dstsize != 0)
		{
			while (src[index] != '\0' && index < (dstsize - 1))
			{
				dest[index] = src[index];
				index++;
			}
			dest[index] = '\0';
		}
		return (count);
		}



