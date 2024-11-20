/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:57:19 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/22 12:54:10 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == ch)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/* #include <string.h>

int	main(int ac, char **av)
{
	char	*result;
	char	*result2;

	if (ac < 4)
		return (-1);
	result = ft_memchr(av[1], av[2][0], atoi(av[3]));
	result2 = memchr(av[1], av[2][0], atoi(av[3]));
	printf("%s \n", result);
	printf("%s \n", result2);
} */