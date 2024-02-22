/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 03:03:30 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/23 13:01:04 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
int	main()
{
	char str[1000] = "cursus42";
	int len = ft_strlen(str);
	printf("antes de bzero: %s\n", str);
	
	ft_bzero(str, 3);
	
	int i = 0;
	while (i < len)
	{
		if (str[i] == '\0')
			write (1, "bzero funciona\n", 15);
		else
			write (1, &str[i], 1);
		i++;
	}
	printf("despues de bzero: %s\n", &str[4]);
	
	return 0;
}
*/
