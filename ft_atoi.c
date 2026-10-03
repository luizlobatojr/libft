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

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;

	// 1. Ignora espaços em branco e caracteres de espaçamento
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	// 2. Trata o sinal positivo ou negativo
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	// 3. Converte os dígitos ASCII para inteiro
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	// 4. Retorna o resultado aplicado ao sinal
	return (result * sign);
}
