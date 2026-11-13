/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:59:35 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/07 22:13:43 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count = count + 1;
		lst = lst->next;
	}
	return (count);
}
/*
	
#include <stdio.h>
int 	main(void)
{
	t_list *list;
	t_list *element1;
	t_list *element2;

	element1 = ft_lstnew("10");
	element2 = ft_lstnew("20");
	
	element1->next = element2;
	
	list = element1;
	//lstclear(&list, NULL);
	printf("size of list: %u\n", ft_lstsize(list));
	
	return (0);
}*/
