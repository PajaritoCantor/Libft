/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:17:48 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/22 20:48:51 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (b);
}
/*
#include <stdio.h>
int	main(void)
{
	int arr [5];

	ft_memset(arr, 0 , sizeof(arr));
	
	int i = 0;

	while (i < 5)
	{
		printf("[%d]=%d\n", i, arr[i]);
		i++;
	}
	
	return (0);
}
*/