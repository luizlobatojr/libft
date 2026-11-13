/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:10:14 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/12 10:10:20 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	ft_toupper2(unsigned int n, char *c)
{
	(void) n;
	*c = ft_toupper(*c);
}

int	main(void)
{
	char str[] = "Hello World";
	printf("string antes: %s\n", str);
	ft_striteri(str, ft_toupper2);
	printf("string depois: %s\n", str);
	return (0);
}*/
