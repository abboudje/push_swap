/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:13:00 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/22 15:05:30 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	if (!src || !dst)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		if (*(unsigned char *)(src + i) == (unsigned char)c)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}

/* #include<string.h>
int	main(int ac, char **av)
{
	char	*result;
	char	*result2;

	if (ac < 5)
		return (-1);
	result = ft_memccpy(av[1], av[2], av[3][0], atoi(av[4]));
	printf("result1 : %s, dest : %s \n", result, av[1]);
	printf("show the value of dest 2 %s\n", av[5]);
	result2 = memccpy(av[5], av[2], av[3][0], atoi(av[4]));
	printf("\033[1;32m");//green red is /32
	printf("result2 : %s, dest : %s \n", result2, av[5]);
}
 */