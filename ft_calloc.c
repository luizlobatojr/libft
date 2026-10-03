/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 10:17:17 by lubatist          #+#    #+#             */
/*   Updated: 2026/10/03 10:17:23 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	// Regra para count ou size igual a 0
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}

	// 1. Prevenção contra overflow na multiplicação
	if (count != 0 && size > (size_t)(-1) / count)
		return (NULL);
	
	total_size = count * size;
	
	// 2. Aloca a memória usando malloc
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	
	// 3. Preenche toda a memória alocada com zeros
	ft_bzero(ptr, total_size);
	
	return (ptr);
}
