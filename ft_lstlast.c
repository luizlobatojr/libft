/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 22:40:59 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/07 22:53:34 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *list;
	t_list *last;

	list = ft_lstnew("10");
	list->next = ft_lstnew("20");
	list->next->next = ft_lstnew("30");

	last = ft_lstlast(list);

	if (last != NULL)
	{
		printf("last element: %s\n", (char *)last->content);
	}
	return (0);
}*/
