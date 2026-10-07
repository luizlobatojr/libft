/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:39:30 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/29 19:40:29 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dst);
}

#include <stdio.h>

// Declaração da função
void    *ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
    char buffer[] = "abcdefghi";

    printf("Original:     %s\n", buffer);

    // Tentamos mover "abcde" para o espaço que começa no 'c' (sobreposição!)
    // Origem: &buffer[0] ('a')
    // Destino: &buffer[2] ('c')
    // Tamanho: 5 bytes
    ft_memmove(buffer + 2, buffer, 5);

    printf("Com memmove:  %s\n", buffer);

    return (0);
}