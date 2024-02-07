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
}
/*
int main() {
    // Ejemplo de mensaje para imprimir
    const char *mensaje = "¡Hola, Mundo!\n";
    
    // Utilizamos printf para imprimir el mensaje
    printf("%s", mensaje);
    
    return  0;
}
*/