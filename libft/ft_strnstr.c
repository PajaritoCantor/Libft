/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:52:15 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/28 08:21:13 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	haystack_len;

	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	needle_len = strlen(needle);
	haystack_len = strlen(haystack);
	if (len > haystack_len)
		len = haystack_len;
	while (len >= needle_len)
	{
		if (strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*
int main ()
{
    char haystack [] = "Perritos y palomas haciendo popito";
    char needle[] = "haciendo";

    char *haciendo = ft_strnstr(haystack, needle, sizeof(haystack));

    printf("haciendo: %s\n", haciendo);

    return 0;
}
*/