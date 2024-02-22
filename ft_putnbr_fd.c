/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:54:39 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/28 11:08:01 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
/*
#include <stdio.h>
int main(int argc, char *argv[]) 
{
    // Verificar si se proporcionó un argumento
    if (argc <  2) {
        printf("Uso: %s10\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Convertir el argumento a entero
    int numero = atoi(argv[1]);

    // Imprimir el número usando ft_putnbr_fd
    ft_putnbr_fd(numero, STDOUT_FILENO);
    printf("\n"); // Agregar una nueva línea después de imprimir el número

    return EXIT_SUCCESS;
}
*/