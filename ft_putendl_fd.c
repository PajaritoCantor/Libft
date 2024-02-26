/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:38:28 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/28 10:52:58 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>
#include <stdio.h>
int main ()
{
	char *str = "Michitos ronroneando";
	
	int fd;

	fd = open("borrar.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}
	ft_putendl_fd(str, fd);

	if (close(fd) == -1)
	{
		perror("Error closing file");
		return 1;
	}
	return (0);
}
*/