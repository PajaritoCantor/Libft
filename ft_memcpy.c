/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 08:06:11 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/22 20:58:52 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
int main()
{	
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	char d[27];

	ft_memcpy(d, s, sizeof(char) * 27);
	printf("d: %s\n", d);

	char e [10];
	
	ft_memcpy(e, s+8, sizeof(char) * 9);
	e  [9] = '\0';

	printf("e: %s\n", e);

	return 0;
}
*/
