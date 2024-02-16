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

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
int ft_atoi(const char *str)
{
	int sign;
	int value;

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
		if ((sign == 1 && ((2147483647 / 10) < value))
			|| (sign == -1 && ((-2147483648 / 10) > value)))
		{
			return (sign * value);
		}
		value = value * 10 + (*str++ - '0');
	}
	return (sign * value);
}
