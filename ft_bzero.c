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
int	main()
{
	char str[] = "cursus42";
	printf("antes de bzero: %s\n", str);
	ft_bzero(str, sizeof(str));
	printf("Despuès de bzero: %s\n", str);
	
	return 0;
}
*/
