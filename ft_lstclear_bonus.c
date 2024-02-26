/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:15:52 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/04 02:15:20 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free(*lst);
}
/*
#include <string.h>
int main ()
{
    t_list *node1 = ft_lstnew(strdup("node 1"));
    t_list *node2 = node1->next = ft_lstnew(strdup("node 2"));
    t_list *node3 = node2->next = ft_lstnew(strdup("node 3"));
    node3->next = NULL;

    printf("%s\n", (char *) node2->content);

    ft_lstclear(&node2, free);

	t_list *temp = node2;
	while (temp != NULL)
{
    printf("%s\n", (char *) temp->content);
	temp = temp->next;
}
	ft_lstdelone(node1, free);
	node1 = NULL;

    return 0;
}
*/