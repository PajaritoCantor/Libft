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
    char source[] = "tu mamá";
    char destination[20];
		
	printf("%s\n", ft_memmove (destination, source, sizeof(char) * 20));

//string

    int source2[] = {1,2,3,4,5,6,7,8,9};
    int destination2[20];
	size_t len2 = sizeof(source2);

	ft_memmove(destination2, source2, len2);

	size_t i = 0;
	while (i < len2 / sizeof(int))
	{
		printf("%d\n", destination2[i]);
		i++;
	}	
	return 0;
}
//arrays
*/