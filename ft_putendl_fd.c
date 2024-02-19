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
int main() {
    // Mensaje para imprimir
    char *mensaje = "¡Hola, Mundo!";
    
    // Descriptor de archivo para stdout
    int fd =   1;
    
    // Llamada a la función ft_putendl_fd para imprimir el mensaje
    ft_putendl_fd(mensaje, fd);
    
    return   0;
}
*/