/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:07:43 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/01 16:10:37 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
int main ()
{
	char str [25] = "Michitos ronroneando";
	
	int fd;

	fd = open("borrar.txt", O_WRONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}
	ft_putstr_fd(str, fd);

	if (close(fd) == -1)
	{
		perror("Error closing file");
		return 1;
	}
	return (0);
}
*/