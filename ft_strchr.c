/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:58:43 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/05 11:22:57 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{	
	char s[30] = "World" ;
	{
		int c = 'm';
		char *ret;

		ret = ft_strchr(s, c);

		printf("Ptr p a primeira ocorr do caract c na str %s", ret);
	}
	return (0);
}*/
