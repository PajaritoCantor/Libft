/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:21:44 by juan              #+#    #+#             */
/*   Updated: 2025/02/25 14:43:10 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (src_len);
}
/*
int main ()
{
	char		dst[20] = "Mus";
	const char	*src = "Holasic paco perros";
	size_t		result;

	result = ft_strlcpy(dst, src, 2);
	printf("Resultado: %zu\n", result);
	printf("dst: %s\n", dst);
	return (0);
}
*/