/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:09:15 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/20 16:33:55 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
	{
		return ;
	}
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

/*   int	main(int ac, char **av)
{
	int buffer[10] = {1, 2, 3, 4, 5};
	size_t size = sizeof(buffer);
	ft_bzero(buffer, size);
	size_t i = 0;
	while (i < 10)
	{
		printf("%d |", buffer[i]);
		i++;
	}
	return (0);
} */