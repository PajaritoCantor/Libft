/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 03:26:02 by jurodrig          #+#    #+#             */
/*   Updated: 2024/01/27 21:11:33 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int main()
{
    const char *s = "HALHITA";
    int c = 'H';

    printf("%ld\n", ft_strrchr(s, c)-s);
	printf("%ld\n", strrchr(s, c) -s);
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
    return (0);
}
*/