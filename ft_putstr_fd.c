/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:31:41 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 06:06:07 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
        return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	
	int fd;
    
    fd = open("teste.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Erro ao abrir o ficheiro");
        return (1);
    }
    
    printf("Ficheiro aberto com sucesso! FD: %d\n", fd);
    ft_putstr_fd("Ola, Mundo!", fd);
    close(fd);
	return (0);
}*/

