/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:58:27 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/22 20:58:43 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
int main(void)
{
    char str1[] = "Hola Mundo";
    char str2[] = "Hola Mundo";
    char str3[] = "Hola Mundo!";

    int res1 = ft_memcmp(str1, str2, sizeof(str1));
    int res2 = ft_memcmp(str1, str3, sizeof(str1));

    printf( "Resultado de comparar str1 y str2: %d\n", res1);
    printf( "Resultado de comparar str1 y str3: %d\n", res2);
}
*/