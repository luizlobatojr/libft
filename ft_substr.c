/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:42:28 by lubatist          #+#    #+#             */
/*   Updated: 2026/10/07 15:42:29 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	i;
    size_t	s_len;
    char	*sub;

    if (!s)
        return (NULL);
    
    // Calcula o tamanho da string original 's'
    s_len = 0;
    while (s[s_len])
        s_len++;

    // Se o índice 'start' for maior ou igual ao tamanho de 's',
    // retorna uma string vazia alocada ("")
    if (start >= s_len)
    {
        sub = (char *)malloc(sizeof(char) * 1);
        if (!sub)
            return (NULL);
        sub[0] = '\0';
        return (sub);
    }

    // Ajusta o 'len' caso ele ultrapasse o final da string original
    if (len > s_len - start)
        len = s_len - start;

    // Aloca memória para a substring + o caractere nulo '\0'
    sub = (char *)malloc(sizeof(char) * (len + 1));
    if (!sub)
        return (NULL);

    // Copia os caracteres da string original para a nova substring
    i = 0;
    while (i < len && s[start + i])
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';

    return (sub);
}
