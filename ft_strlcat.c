/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:00:01 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/05 10:28:27 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	i;
	size_t	j;

	dst_size = 0;
	while (dst_size < size && dst[dst_size] != '\0')
		dst_size++;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (size <= dst_size)
		return (size + src_size);
	i = dst_size;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_size + src_size);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{	
	// --- Teste 1: Espaco suficiente no buffer ---
	char	src[] = " World";
	{
		char 	dst[30] = "Hello";

		printf("=== Teste1: Espaco suficiente ===\n");
		printf("Antes: dst: = \"%s\"\n", dst);
		
		size_t ret = ft_strlcat(dst, src, sizeof(dst));

		printf("Depois: dst = \"%s\"\n", dst);
		printf("Retorno %zu (Esperado: 12)\n\n",ret);
	}
	return (0);
}*/
