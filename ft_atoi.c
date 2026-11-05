/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 10:17:39 by lubatist          #+#    #+#             */
/*   Updated: 2026/10/03 10:17:43 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static int	signed_result(unsigned int result, int sign)
{
	if (sign < 0 && result == (unsigned int)INT_MAX + 1U)
		return (INT_MIN);
	if (sign < 0)
		return (-(int)result);
	return ((int)result);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (unsigned int)(str[i] - '0');
		i++;
	}
	return (signed_result(result, sign));
}
