/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:34:27 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/27 10:34:29 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"


t_list *ft_lstnew(void *content)
{
	t_list *new;

	if (!(new = (t_list*) malloc(sizeof(t_list))))
	return (0);

	new -> content = content;
	new -> next = 0;
	return (new);
}
