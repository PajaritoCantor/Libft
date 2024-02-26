/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 07:37:45 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/28 07:52:32 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return ;
}
/*
#include <stdio.h>
#include <fcntl.h>
int main() 
{
	int fd;
	fd = open("example.txt", O_WRONLY | O_CREAT, 0644);
	
	if (fd == -1)
	{
	
	return (1);

	}
		ft_putchar_fd('1', fd);
	
	close (fd);

	return (0);
    
}
*/