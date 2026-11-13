/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:22:50 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/13 10:22:55 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst)
	{
		del(lst->content);
	}
	free(lst);
}
/*
void del(void *content)
{
		free(content);
}

int	main(void)
{
	t_list	*node;
	
	node = ft_lstnew("Hello");
	//node->next = ft_lstnew("World");
	//node->next->next = ft_lstnew("42");
	
	while (node != NULL)
	{
		printf("antes element: %s\n", (char *)node->content);
		
		node = node->next;
	}
	ft_lstdelone(node, del);
	while (node != NULL)
	{
		printf("depois element: %s\n", (char *)node->content);
		
		node = node->next;
	}
	//printf("NULL element: %s\n", (char *)node->content);
	return (0);
}*/
