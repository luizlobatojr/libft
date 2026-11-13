/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:13:51 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/06 14:15:13 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*memcmp1;
	const unsigned char	*memcmp2;
	size_t				i;

	memcmp1 = (const unsigned char *)s1;
	memcmp2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (memcmp1[i] != memcmp2[i])
		{
			return (memcmp1[i] - memcmp2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Herlo";
	size_t n = 5;
	
	int ret = ft_memcmp(s1, s2, n);
	
	printf("Antes: %d\n", ret);
	
	return (0);
}*/
