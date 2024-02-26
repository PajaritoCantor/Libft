/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:23:34 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/28 07:36:39 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned	int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void test_function(unsigned int i, char *s) 
{
	i = 0;
	while (*s >= 'a' && *s <= 'z')
		s[0] -= 32;
}
#include <stdio.h>
int main ()
{
	char str [] = "papitas";
	ft_striteri(str, test_function);
	printf("%s\n", str);
	return (0);
}
*/