/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:47:55 by juan              #+#    #+#             */
/*   Updated: 2025/02/25 14:40:19 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	needle_len;

	if (!needle)
		return (NULL);
	if (!len)
		return (0);
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (len > haystack_len)
		len = haystack_len;
	while (len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	haystack[] = "Ppapapapapapapaptospapapapapapa";
	char	needle[] = "tos";
	char	*result;

	result = ft_strnstr(haystack, needle, 25);
	printf("result: %s\n", result);
	return (0);
}
*/
