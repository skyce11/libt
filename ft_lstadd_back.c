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
