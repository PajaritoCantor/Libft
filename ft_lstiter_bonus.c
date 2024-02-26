/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 02:50:45 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/04 03:33:40 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
void	duplicate_function(void *content)
{
	char *str = (char *)content;
	char *duplicated = ft_strdup(str);

	printf("%s\n", duplicated);
	free(duplicated);
}

int main ()
{
	t_list *lst = ft_lstnew("Separando");
	ft_lstadd_back(&lst, ft_lstnew(", "));
	ft_lstadd_back(&lst, ft_lstnew("cadenas"));

	ft_lstiter(lst, duplicate_function);

	return 0;
}
*/