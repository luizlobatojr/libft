/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 18:35:44 by lubatist          #+#    #+#             */
/*   Updated: 2026/10/03 18:35:47 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	
	// 1. Encontra o primeiro índice que NÃO está no set
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	
	// Se a string for totalmente vazia ou composta apenas pelo set
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	
	end--;
	
	// 2. Encontra o último índice de trás para frente que NÃO está no set
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	
	// Se o start passou do end, significa que tudo foi cortado
	if (start > end)
		return (ft_strdup(""));
		
	// 3. Usa o nosso ft_substr para extrair o miolo limpo com segurança!
	return (ft_substr(s1, start, end - start + 1));
}
