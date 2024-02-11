/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:38:37 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/04 02:15:18 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
		del(lst ->content);
	free(lst);
}
/*
int main ()
{
	t_list *node1 = ft_lstnew("node 1");
	t_list *node2 = ft_lstnew("node 2");
	t_list *node3 = ft_lstnew("node 3");

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;


		printf("%s\n", (char *) node2->content);
		ft_lstdelone(node2, free);

		ft_lstdelone(node1, free);
		ft_lstdelone(node3, free);
	
	return 0; 
}
*/