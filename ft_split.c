/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:37:06 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/28 12:18:15 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include "libft.h"

static char **ft_malloc_split (char const *s, char c)
{
	size_t i;
	char **split;
	size_t total;

	i = 0;
	total = 0;
	while(s[i])
	{
		if (s[i] == c)
			total++;
		i++;
	}
	split = (char **) malloc(sizeof(s) * (total +2));
	if (!split)
		return (NULL);
	return (split);
}

static void *ft_free_all(char **split, size_t elts)
{
	size_t i;

	i = 0;
	while(i < elts)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static void *ft_split_range (char **split, char const *s, t


	
