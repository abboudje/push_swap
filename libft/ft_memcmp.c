/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:22:53 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/22 16:06:54 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

/* #include <string.h>

int	main(int ac, char **av)
{
	int	result;
	int	result2;

	if (ac < 4)
		return (-1);
	result = ft_memcmp(av[1], av[2], atoi(av[3]));
	printf("%d \n", result);
	result2 = ft_memcmp(av[1], av[2], atoi(av[3]));
	printf("%d \n", result2);
} */