/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:13:19 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/10 12:14:28 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *node = NULL;
	t_list *first_node = ft_lstnew("A");
	t_list *second_node = ft_lstnew("B"); 
	
	ft_lstadd_front(&node, first_node);
	ft_lstadd_front(&node, second_node);

	return (0);
}*/
