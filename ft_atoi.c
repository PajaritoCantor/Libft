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