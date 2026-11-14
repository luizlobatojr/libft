/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:19:01 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 05:44:45 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int        main(void)
{
        int        fd;
        fd = open("teste.txt", O_WRONLY | O_CREAT, 0644);
        if (fd > 0)
        {
                ft_putchar_fd('H', fd);
                ft_putchar_fd('e', fd);
                ft_putchar_fd('l', fd);
                ft_putchar_fd('l', fd);
                ft_putchar_fd('o', fd);
                ft_putchar_fd('\n', fd);
                close(fd);
        }
        return (0);
}*/