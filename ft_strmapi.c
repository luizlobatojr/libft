/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:05:43 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/12 11:05:45 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

char	ft_upper(unsigned int i, char c)
{
	(void) i;
	return (ft_toupper(c));
}

int	main(void)
{
	char *str;
	
	str = ft_strmapi("Hello World", ft_upper);
	printf("string depois: %s\n", str);
	free(str);
	return (0);
}*/
