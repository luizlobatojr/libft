/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 01:57:28 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 10:13:12 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;
	size_t	i;

	if (nmemb && size > (size_t)(-1) / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
	int *number;
	int i;

	number = ft_calloc(5, sizeof(int));
	if (!number)
	{
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("posicao: %d %d\n", i, number);
		i++;
	}
	free(number);
	return (0);
}*/
