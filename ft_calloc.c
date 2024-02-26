/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:03:53 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/04 03:30:23 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if (count != 0 && total_size / count != size)
	{
		return (NULL);
	}
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (0);
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_bzero(ptr, total_size);
	return (ptr);
}
/*
#include <stdio.h>
int main() 
{

    size_t len = 10;
    char *result = ft_calloc(len, sizeof(char));
	
	size_t count = 0;
	while (count < len)
	{
		if (result[count] != 0)
		{
			printf("error");
			return 0;
		}
		count++;
	}
	printf("right\n");
	return 0;
}
*/