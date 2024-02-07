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
int main()
{
    int source[] = {1,2,3,4,5,6,7,8,9,10};
    int destination[10];

	ft_memmove (destination, source, sizeof(int) * 10);
	
	int i = 0; 
	while(i < 10)
	{
	printf("destination[%d]=%d\n", i, destination[i]);
	i++;
	}
}
*/