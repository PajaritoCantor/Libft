/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 00:38:08 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/22 20:58:29 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*
int main(void)
{
	char data[] = {'c', 'u', 'r', 's', 'u', 's'};

	char *pos = ft_memchr(data, 'r', 6);
	if (pos == NULL)
	{
	printf("character not found!\n");
	}
	else
	{
	printf("pos[0] = %c\n", pos[0]);
	printf("pos[1] = %c\n", pos[1]);
	} 
	char str[] = "johnwick@gmail.com";

	char *domain = ft_memchr(str, '@', strlen(str));
	domain++;

	printf: ("domain = %s\n", domain);
	
	return (0);
}
*/