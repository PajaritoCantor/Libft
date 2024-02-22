/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:05:44 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/01 10:49:31 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c || !c)
		return ((char *)s);
	return (NULL);
}
/*
int main ()
{
	const char *s = "CURSUS42";
	int c = 'U';
	
	printf("%ld\n", ft_strchr (s, c) - s);
	printf("%s\n", ft_strchr (s, c));
	
	return (0);
}
*/