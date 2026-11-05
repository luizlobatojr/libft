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

#include <stdint.h>
#include "libft.h"

static void	copy_forward(unsigned char *dst, const unsigned char *src,
		size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

static void	copy_backward(unsigned char *dst, const unsigned char *src,
		size_t len)
{
	while (len > 0)
	{
		len--;
		dst[len] = src[len];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len == 0 || dst == src)
		return (dst);
	if ((uintptr_t)dst < (uintptr_t)src)
		copy_forward((unsigned char *)dst, (const unsigned char *)src, len);
	else
		copy_backward((unsigned char *)dst, (const unsigned char *)src, len);
	return (dst);
}
