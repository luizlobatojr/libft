/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:22:10 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 06:02:47 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*include <stdio.h>

int        main(void)
{
    printf("tolower: [%c]\n", ft_toupper('A'));
    printf("tolower: [%c]\n", ft_toupper('a'));
    return (0);
}*/