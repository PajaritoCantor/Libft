/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:52:15 by jurodrig          #+#    #+#             */
/*   Updated: 2024/02/01 21:25:17 by jurodrig         ###   ########.fr       */
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
	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (len > haystack_len)
		len = haystack_len;
	while (len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
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

    char *result = ft_strnstr(haystack, needle, sizeof(haystack));

    printf("result: %s\n", result );

    return 0;
}
*/