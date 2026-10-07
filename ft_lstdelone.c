/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:39:58 by lubatist          #+#    #+#             */
/*   Updated: 2026/10/07 15:40:00 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
