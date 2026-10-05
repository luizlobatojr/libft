#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	
	// 1. Libera o conteúdo do nó usando a função 'del' fornecida
	if (lst->content)
		del(lst->content);
	
	// 2. Libera a memória do nó em si
	free(lst);
}