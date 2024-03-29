/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:49:13 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/01 19:16:00 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst ||!new)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main ()
{
	t_list *lst = NULL;
	
	t_list *new_node = ft_lstnew("Hola1");
	ft_lstadd_front(&lst, new_node);

	new_node = ft_lstnew("Hola2");
	ft_lstadd_front(&lst, new_node);

	t_list *current = lst;
	while (current != NULL)
	{
		printf("%s\n", (char *)current ->content);
		current = current->next;
	}
	current = lst;
	t_list *tmp;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
	}

	return 0;
}
*/