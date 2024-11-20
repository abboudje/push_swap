/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:12:20 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/27 12:13:22 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && i + j < len)
		{
			j++;
		}
		if (!little[j])
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

/* #include <string.h>

int	main(int ac, char **av)
{
	char	*result;

	if (ac < 4)
		return (-1);
	result = ft_strnstr(av[1], av[2], atoi(av[3]));
	printf("the result : %s\n", result);
} */
