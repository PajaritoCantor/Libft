/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:00:45 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/25 17:15:15 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	value;

	sign = 1;
	value = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if ((sign == 1 && value > LLONG_MAX / 10)
			|| (sign == -1 && value < LLONG_MIN / 10))
		{
			return (sign * value);
		}
		value = value * 10 + (*str++ - '0');
	}
	return (sign * value);
}

/*
int main ()
{
	const char *str1 = "92233 7203";
	printf ("%.4s\n", str1);

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", atoi(str1));
	
	return (0);
}
*/

La función ft_atoi convierte una cadena de caracteres que representa un número entero en su equivalente numérico:

- El bucle while al inicio de la función ignora cualquier espacio en blanco o carácter de control al inicio de la cadena.
- Si el primer carácter no es un espacio en blanco es un signo de más (+) o de menos (-), se establece el valor de sign en consecuencia y se incrementa el puntero de la cadena.
- El siguiente bucle while recorre la cadena, convirtiendo cada dígito en un número y agregándolo al valor total. Esto se hace multiplicando el valor total actual por 10 y sumando el valor del dígito actual.
- Antes de agregar el dígito actual al valor total, se verifica si la próxima operación causará un desbordamiento. Si es así, se devuelve el valor actual.
- Se devuelve el valor total multiplicado por el signo para obtener el número entero correspondiente a la cadena de entrada.
