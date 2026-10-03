/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 10:18:14 by lubatist          #+#    #+#             */
/*   Updated: 2026/10/03 10:18:17 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*dup;

	// 1. Calcula o tamanho da string original
	len = 0;
	while (s1[len] != '\0')
		len++;

	// 2. Aloca memória para a nova string (+1 para o '\0')
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);

	// 3. Copia os caracteres para o novo espaço alocado
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';

	// 4. Retorna o ponteiro para a string duplicada
	return (dup);
}
