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
#include <stdlib.h>
#include <string.h>

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
int main() {
    int num_elements =  5;
    size_t size_of_element = sizeof(int);
    int *array;

    array = (int *)ft_calloc(num_elements, size_of_element);

    if (array == NULL) {
        printf("No se pudo asignar memoria.\n");
        return  1;
    }

    for (int i =  0; i < num_elements; i++) {
        array[i] = i +  1;
    }

    printf("Contenido del array:");
    for (int i =  0; i < num_elements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return  0;
}
*/