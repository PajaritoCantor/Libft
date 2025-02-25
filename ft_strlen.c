/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:44:38 by juan              #+#    #+#             */
/*   Updated: 2025/02/25 15:12:21 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define TIMEOUT 5

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}
int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(TIMEOUT);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_strlen("Hello !"));
	else if (arg == 2)
		ft_print_result(ft_strlen("1"));
	else if (arg == 3)
		ft_print_result(ft_strlen("lorem\tipsum\tdolor\nsit\namet\n"));
	else if (arg == 4)
		ft_print_result(ft_strlen(""));
	else if (arg == 5)
		ft_print_result(ft_strlen("\n\n\f\r\t"));
	else if (arg == 6)
		ft_print_result(ft_strlen("   "));
	return (0);
}
*/