/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 08:02:00 by juan              #+#    #+#             */
/*   Updated: 2025/02/25 14:43:17 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main ()
{
	const char	*str = "strchr";
	char		c;

	c = 'r';
	printf("Caracter: '%c' en posición: %ld\n de '%s'\n", c, ft_strchr (str, c)
		- str, str);
	printf("Es decir, el caracter encontrado empieza en: %s\n", ft_strchr (str,
			c));
	return (0);
}
*/