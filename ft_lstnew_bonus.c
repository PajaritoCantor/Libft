/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:56:11 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/01 20:35:16 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
#include <stdio.h>
int main ()
{
	t_list *new_list = ft_lstnew("Hello, World!");
	t_list *empty_element = ft_lstnew(NULL);

	printf("Contenido de la new_list: %s\n", (char *)new_list->content);
	if (empty_element->content)
		printf("empty_content: %s\n", (char *)empty_element->content);
	else
		printf("empty_element está vacío.\n");

	free(new_list);
	free(empty_element);

	return 0;
}
*/