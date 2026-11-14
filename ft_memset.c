/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:36:39 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 10:04:46 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buffer1[50] = "Vamos testar a funcao ft_memset da libft!";
	char	buffer2[50] = "Vamos testar a funcao ft_memset da libft!";

	printf("Antes:\nBuffer1: %s\nBuffer2: %s\n\n", buffer1, buffer2);

	// Usando a memset original
	memset(buffer1, '.', 6);
	
	// Usando a sua ft_memset
	ft_memset(buffer2, '.', 6);

	printf("Depois:\n");
	printf("Original (memset):    %s\n", buffer1);
	printf("Sua versao (ft_memset): %s\n", buffer2);

	return (0);
}*/