/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:38:05 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/04 02:15:22 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		last = ft_lstlast(*lst);
		if (last)
		{
			last->next = new;
		}
		else
			*lst = new;
	}
}
/*
#include <stdio.h>
int main ()
{
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *new = ft_lstnew("New");

	node1->next = node2;
	node2->next = NULL;
	new->next = NULL;
	
	ft_lstadd_back(&node1, new);
	
	printf("%s\n", (char *)node1->next->next->content);

	return 0;
}
*/