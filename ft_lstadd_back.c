#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	
	// Reutilizamos o ft_lstlast para encontrar o último nó!
	last = ft_lstlast(*lst);
	last->next = new;
}