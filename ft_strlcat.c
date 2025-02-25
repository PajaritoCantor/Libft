/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:23:50 by juan              #+#    #+#             */
/*   Updated: 2025/02/25 14:43:13 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	if (dest_len >= dstsize)
		return (src_len + dest_len);
	dest += dest_len;
	dstsize -= dest_len;
	while (*src && dstsize--)
		*dest++ = *src++;
	dest = '\0';
	return (src_len + dest_len);
}
/*
int	main(void)
{
	char		dest[20] = "Hola";
	const char	*src = ", mundo!";
	size_t		result;

	result = ft_strlcat(dest, src, 7);
	printf("Cadena resultante: \"%s\"\n", dest);
	printf("Longitud total esperada: %zu\n", result);
	return (0);
}
*/
