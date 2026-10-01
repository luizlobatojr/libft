/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:52:26 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/29 18:52:31 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *d;
    const unsigned  *s;
    size_t  i;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    i = 0;
    while(i < n)
    {
        d[i] = s[i];
        i++;
        return (dst);
    }
}
