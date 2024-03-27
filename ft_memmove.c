/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:58:15 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/23 11:06:47 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len) 
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (s < d && d < s + len)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*(d++) = *(s++);
	return (dst);
}
/*
#include <stdio.h>
int main()
{
    char source[] = "tu mamá";
    char destination[20];
		
	printf("%s\n", ft_memmove (destination, source, sizeof(char) * 20));

//string

    int source2[] = {1,2,3,4,5,6,7,8,9};
    int destination2[20];
	size_t len2 = sizeof(source2);

	ft_memmove(destination2, source2, len2);

	size_t i = 0;
	while (i < len2 / sizeof(int))
	{
		printf("%d\n", destination2[i]);
		i++;
	}	
	return 0;
}
//arrays
*/

- La función memmove se utiliza para copiar n bytes de src a dst. 
	* Si __src__ y **dst** se superponen, la función memmove garantiza que los datos originales en src se copien correctamente a dst.
- void *dst, const void *src, size_t len: Son los parámetros de la función
	* dst es el puntero al destino donde quieres copiar los datos
	* src es el puntero a la fuente de donde quieres copiar los datoss
	* len es la cantidad de bytes que quieres copiar
- unsigned char *d, *s Estos son punteros a los datos de destino y origen, respectivamente, y se utilizan para acceder a los datos byte a byte.
- if (!dst && !src) return (NULL); Este es un chequeo de seguridad para asegurarse de que tanto src como dst no son NULL.
	* Si alguno de ellos es NULL, la función retorna NULL
-if (s < d && d < s + len) Este chequeo se realiza para ver si la memoria de origen y destino se superpone.
	* Si se superponen y el origen está antes que el destino, entonces copia los datos de atrás hacia adelante para evitar la sobreescritura de los datos que aún no se han copiado.
- while (len--) *(d++) = *(s++); Este es el caso cuando la memoria de origen y destino no se superpone, o si se superpone pero el destino está antes que el origen.
	* En este caso, se pueden copiar los datos de adelante hacia atrás.
- return (dst); Finalmente, la función retorna un puntero al destino.
