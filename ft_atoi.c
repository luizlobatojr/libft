/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:00:40 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 09:43:43 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	result;
	int				sign;
	int				i;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (unsigned int)(nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int main(void)
{

	printf("result: %d\n",ft_atoi("123"));
	printf("result: %d\n",ft_atoi("+456"));
	printf("result: %d\n",ft_atoi("-567"));
	printf("result: %d\n",ft_atoi("   89"));
	return (0);
}*/
