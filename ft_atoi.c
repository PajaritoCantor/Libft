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
#include <ctype.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
		sign = 44 - *str++;
	while (ft_isdigit(*str))
	{
		if ((sign == 1 && ((2147483647 / 10) < value))
			|| (sign == -1 && ((-2147483648 / 10) > value)))
		{
			return (sign * value);
		}
		value = value * 10 + (*str++ - '0');
	}
	return (sign * value);
}
/*
int main()
{
	const char *str1 = "	-1234";
	const char *str2 = "\t+56789";
	const char *str3 = " 123abc";
	const char *str4 = "2145483647";
	const char *str5 = "-2147483647";
	const char *str6 = "2147483648";
	const char *str7 = "-2147483649";

	printf("conversion of '%s': %d\n", str1, ft_atoi(str1));
	printf("conversion of '%s': %d\n", str2, ft_atoi(str2));
	printf("conversion of '%s': %d\n", str3, ft_atoi(str3));
	printf("conversion of '%s': %d\n", str4, ft_atoi(str4));
	printf("conversion of '%s': %d\n", str5, ft_atoi(str5));
	printf("conversion of '%s': %d\n", str6, ft_atoi(str6));
	printf("conversion of '%s': %d\n", str7, ft_atoi(str7));

}
*/