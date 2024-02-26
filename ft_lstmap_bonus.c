/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 03:38:04 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/04 04:26:49 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;
	void	*mapped_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		mapped_content = f(lst->content);
		node = ft_lstnew(mapped_content);
		if (!node)
		{
			del(mapped_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void	*duplicate_function(void *content)
{
	char	*str;
	char	*duplicated;

	str = (char *)content;
	duplicated = ft_strdup(str);
	printf("%s\n", duplicated);
	return (duplicated);
}
void	del_function(void *content)
{
	free(content);
}
int main()
{
	t_list *lst = ft_lstnew(ft_strdup("Multiplicando"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("los ")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("panes")));

	t_list *new_lst = ft_lstmap(lst, duplicate_function, del_function);

	t_list *temp = new_lst;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	return 0;	
}
*/