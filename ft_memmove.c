/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 01:18:16 by juan              #+#    #+#             */
/*   Updated: 2025/02/25 14:43:23 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	s = (unsigned char *)(src);
	d = (unsigned char *)(dest);
	if (s < d && d < s + n)
		while (n--)
			*d-- = *s--;
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}
/*
int main ()
{
	char	dst[] = {"mundo"};
	char	*src;
	char	*result;

	src = "hola";
	result = ft_memmove(dst, src, 6);
	printf ("Resultado %s", result);
	return (0);
}
*/