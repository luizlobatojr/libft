/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:17:31 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 06:23:07 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
        return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
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
}
}*/
