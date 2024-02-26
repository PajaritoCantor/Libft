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
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
		del(lst ->content);
	free(lst);
}

void	function_print(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)(lst->content));
		lst = lst->next;
	}
}
/*
#include <stdio.h>
int main()
{
    char *str3 = ft_strdup("Nodo numero 3");
    char *str2 = ft_strdup("Nodo numero 2");
    char *str1 = ft_strdup("Nodo numero 1");
	
	t_list  *node1 = ft_lstnew(str3);
    t_list  *node2 = ft_lstnew(str2);
    t_list  *node3 = ft_lstnew(str1);
    
	ft_lstadd_front(&node1, node2);
    ft_lstadd_front(&node1, node3);
    
	printf("Lista Antes:\n");
    function_print(node1);
    
	ft_lstdelone(node3, free);
    printf("Lista Despues:\n");
    
	function_print(node1);
    return (0);
}
*/