/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:07:59 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/04 00:15:37 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
int main ()
{
	t_list *node1 = ft_lstnew("Pollitos");
	t_list *node2 = ft_lstnew("observando");
	t_list *node3 = ft_lstnew("a tu hermana");

	node1->next = node2;
	node2->next = node3;

	t_list *last_node = ft_lstlast(node1);

	if(last_node)
	printf("El último nodo contiene: %s\n", last_node->content);

	return 0;
}
*/