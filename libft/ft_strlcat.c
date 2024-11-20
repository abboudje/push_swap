/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:34:30 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/30 17:50:26 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] && len_dst < size)
		len_dst++;
	while (src[len_src])
		len_src++;
	if (len_dst == size)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dst + i + 1) < size)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (len_dst + i < size)
		dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

/*   int	main(int ac, char **av)
{

   	char buffer[12];
	ft_memcpy(buffer, av[1], 11);
	buffer[11] = '\0';

	const char *src2 = "hi ca va wala";
	size_t res = ft_strlcat(buffer, src2, sizeof(buffer));
	printf("result1:#%s# len : %zu\n", buffer, res);
}  */