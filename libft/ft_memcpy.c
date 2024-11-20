/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:37:31 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/22 13:14:37 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
/*     int	main(int ac, char **av)
{
	int ds[10] = {1, 2, 3, 4, 5};
	int src[10] = {5, 6, 7, 8, 9};
	size_t size = sizeof(ds);
	ft_memcpy(ds, src, size);
	size_t i = 0;
	while (i < 10)
	{
		printf("%d |", ds[i]);
		i++;
	}
	return (0);
}  */