/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:37:06 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 10:37:07 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include "libft.h"


int count_words (const char *str, char c)
{
	int i;
	int t;

	i = 0;
	t = 0;

	while (*str)
	{
		if (*str != c && t == 0)
		{
			t = 1;
			i++;
		}
		else if (*str == c)
			t = 0;
		str++;
	}
	return (i);
}


char *word_dup (const char *str, int start, int finish)
{
	char *word;
	int i;
	
	i = 0;

	word = malloc ((finish - start +1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	int index;
	char **split;
	char *aux;

	i = 0;
	j = 0;
	index = -1;
	aux = (char *) s;

	if (!s || !(split = malloc((count_words(s, c) + 1)* sizeof (char*))))
			return (0);

	while( i <= ft_strlen(aux))
	{
		if (s[i] != c && index <0)
			index = i;

	else if ((s[i] == c || i == ft_strlen(aux)) && index > 0)
	{
		split[j++] = word_dup(s, index, i);
		index = -1;
	}
	i++;

	}
	split[j] = 0;
	return (split);
}
