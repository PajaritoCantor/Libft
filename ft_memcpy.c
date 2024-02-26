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
#include <stdio.h>
int main()
{	
	char src[] = "a,bcdefghijklmnopqrstuvwxyz";
	char dst[27];

	ft_memcpy(dst, src, sizeof(char) * 27);
	printf("dst1: %s\n", dst);

	char dst2 [10];
	
	ft_memcpy(dst2, src+8, sizeof(char) * 9);
	dst2  [9] = '\0';

	printf("dst2: %s\n", dst2);

	char src1[] = "a,bcdefghijklmnopqrstuvwxyz";
//superposicion
	ft_memcpy(src1+5, src1, sizeof(char) * 10);
	src1[15] = '\0';

	printf("src1: %s\n", src1);

	return 0;
}
*/