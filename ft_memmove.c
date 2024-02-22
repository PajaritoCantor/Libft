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
    char source[] = "tu mama";
    char destination[20];
		
	printf("%s", ft_memmove (destination, source, sizeof(char) * 20));
}
*/