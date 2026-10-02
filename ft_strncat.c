/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 22:38:14 by lubatist          #+#    #+#             */
/*   Updated: 2026/10/02 22:38:20 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	// 1. Encontra o fim da string dst
	while (dst[i] != '\0')
		i++;
	
	// 2. Copia no máximo n bytes de src para o final de dst
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	
	// 3. Garante o terminador nulo no final de tudo
	dst[i + j] = '\0';
	
	return (dst);
}
