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

while (ft_isdigit(*str)) se ejecuta mientras el carácter actual en la cadena str se un dígito (0-9).
Dentro del bucle, hay una condición que verifica si el valor actual excede los límites de un entero largo (long long int). Si el valor es demasiado grande o demasiado pequeño, se devuelve el valor actual multiplicado por el signo.
value = value * 10 + (*str++ - '0'): Esta línea de código es la que realmente convierte la cadena de caracteres en un número. Multiplica el valor actual por 10 y luego suma el valor numérico del carácter actual. El carácter se convierte en un número restando el valor del carácter ‘0’. Luego, se incrementa el puntero str para pasar al siguiente carácter.
Finalmente, si todos los dígitos se han procesado sin exceder los límites, se devuelve el valor final multiplicado por el signo.
