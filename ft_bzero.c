/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:25:01 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 10:01:24 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    buffer[20] = "Hello, 42 Porto!";
    int     i;

    printf("--- Antes do ft_bzero ---\n");
    printf("String: %s\n", buffer);

	// Mostra os primeiros 15 bytes em formato numérico/caractere
    printf("Bytes: ");
	
	for (i = 0; i < 15; i++)
    {
        if (buffer[i] >= 32 && buffer[i] <= 126)
            printf("[%c] ", buffer[i]);
        else
            printf("[\\x%02X] ", (unsigned char)buffer[i]);
    }
	printf("\n\n");
	
	ft_bzero(buffer, 7);

	printf("--- Depois do ft_bzero (7 bytes zerados) ---\n");
    // Nota: Como o byte 0('\0') foi colocado no início, o printf para aqui.
    // Vamos imprimir os bytes individualmente para ver o resultado exato.
    printf("Bytes da memória:\n");
    for (i = 0; i < 15; i++)
    {
        printf("Índice %2d: valor = %3d (char: '%c')\n", i, (unsigned char)buffer[i], buffer[i]);
    }
}*/