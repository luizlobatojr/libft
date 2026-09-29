/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 05:36:41 by lubatist          #+#    #+#             */
/*   Updated: 2026/09/29 05:37:42 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
    printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('5'));
	printf("%d\n", ft_isalpha(' '));

	printf("%zu\n", ft_strlen("Hello"));
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", ft_strlen("42 Porto"));
	return (0);
}
