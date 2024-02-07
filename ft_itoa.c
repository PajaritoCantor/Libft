/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:48:35 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/01 11:24:53 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>

static int	ft_digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		ncpy;
	int		i;
	char	*str;

	if (n == -2147483648)
		return (strdup("-2147483648"));
	ncpy = n;
	if (n < 0)
		ncpy = -n;
	i = ft_digit_count(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (ncpy == 0)
		str[i] = '0';
	while (ncpy > 0)
	{
		str[i--] = (ncpy % 10) + '0';
		ncpy /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int main() {
    int numbers[] = {-123,  0,  123, INT_MAX, INT_MIN};
    size_t num_length = sizeof(numbers) / sizeof(numbers[0]);

    for (size_t i =  0; i < num_length; ++i) {
        int num = numbers[i];
        char *str = ft_itoa(num);
        
        if (str == NULL) {
            printf("Error al convertir el número %d a cadena.\n", num);
            continue;
        }
        
        printf("El número %d convertido a cadena es: %s\n", num, str);
        free(str); // Liberar la memoria asignada por ft_itoa
    }

    return  0;
}
*/