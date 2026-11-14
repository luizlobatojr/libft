/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:39:47 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 10:15:18 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		printf("%p -> ", (*lst)->next);
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
void	del_content(void *content)
{
	free(content);
}
int	main (void)
{
	t_list *list;
	list = ft_lstnew(ft_strdup("um"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("dois")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("tres")));
	ft_lstclear(&list, del_content);

	/*printf("Lista: ");
    while (list != NULL) {
        printf("%p -> \n", list->content);
        list = list->next; // Avança para o próximo nó
    }
    printf("NULL\n");

	return (0);
}*/
