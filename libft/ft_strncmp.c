/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:34:52 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/22 11:56:22 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <string.h>
int	main(int ac, char **av)
{
	int	result;
	int	result2;

	if (ac == 1)
		return (-1);
	result = ft_strncmp(av[1], av[2], atoi(av[3]));
	result2 = strncmp(av[1], av[2], atoi(av[3]));
	printf("the result is %d \n", result);
	printf("the result is %d \n", result2);
} */