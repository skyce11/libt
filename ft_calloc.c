/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:30:19 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 10:30:21 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"



void *ft_calloc (size_t count, size_t size)
{
	size_t tot_size;
	void *dst;

	tot_size = size * count;
	if (!(dst = malloc(tot_size)))
			return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);

}
