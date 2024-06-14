/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 03:03:30 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/23 13:01:04 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return ;
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char str[50] = "Hola Mundo!";
    printf("Antes de bzero: %s\n", str);

    ft_bzero(str, 5);
    printf("Después de bzero: %s\n", str);
}
*/
Esta función se utiliza para poner en cero un bloque de memoria.
Toma dos parámetros:
- void *s: puntero que apunta a la memoria que se desea poner a cero
- size_t n: el número de bytes que se desea poner a cero
Dentro de la función, se llama a ft_memset para llenar los primeros n bytes de la memoria apuntada por s con el valor 0
La función retorna sin devolver ningún valor.
