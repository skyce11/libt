/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:32:33 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 10:32:35 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include "libft.h"

void *ft_lstadd_back (t_list **lst, t_list *new)
{

	t_list *aux;

	if (!new)
		return (0);


	if (lst == NULL)
	{
		*lst = new;
		return (0);
	}
	if (!lst)
	{
		*lst = new;
		return (0);
	}
	aux = ft_lstlast(*lst);
	aux -> next = new;
	return (0);
}
