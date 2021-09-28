/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:29:37 by migonzal          #+#    #+#             */
/*   Updated: 2021/09/28 12:08:34 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"



t_list *ft_lstmap (t_list *lst, void* (*f) (void *), void (*del) (void *))
{
	t_list *new;
	t_list *start;

	start = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew(f(lst -> content))))
		{
			ft_lstclear(&start, del);
			return (NULL);;
		}
		ft_lstadd_back(&start, new);
		lst = lst -> next;
	}
	return (start);

}
