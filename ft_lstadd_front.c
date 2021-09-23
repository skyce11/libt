#include "libft.h"

void *ft_lstadd_front(t_list **list, t_list *new)
{
	if (!new)
		return (0);

	if (!list)
	{
		*list = new;
		return (0);
	}
	new -> next = *list;
	*list = new;
	return (0);
}
