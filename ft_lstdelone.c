/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:33:15 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 10:33:17 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"



void ft_lstdelone (t_list *lst, void (*del) (void *))
{
	if (!lst || !del)
		return;
	(del) (lst -> content);
	free (lst);
}