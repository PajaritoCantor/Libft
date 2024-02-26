/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:34:20 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/01 19:15:52 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main ()
{
	t_list *node1 = ft_lstnew("Pajaritos");
	t_list *node2 = ft_lstnew("Cantores");

	node1->next = node2;

	int size_lst = ft_lstsize(node1);

	printf("El tamaño de la lista es %d\n", size_lst);

	return 0;
}
*/