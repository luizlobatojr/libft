/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:39:47 by lubatist          #+#    #+#             */
/*   Updated: 2026/10/07 15:39:50 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del); // Reutilizando o ft_lstdelone!
		*lst = temp;
	}
	*lst = NULL;
}
