/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:58:32 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/30 11:09:42 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	max_elems;

	if (count == 0 || size == 0)
	{
		ptr = malloc(1);
	}
	else
	{	
		max_elems = -1 / size;
		if (count > max_elems)
			return (NULL);
		ptr = (void *) malloc(count * size);
	}
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

/* int	main(int ac, char **av)
{
	int *result;
	int i;
	
	if (ac < 2)
		return (-1);
	result = ft_calloc(atoi(av[1]), sizeof(int));
	i = 0;

	while (i < atoi(av[1])) 
	{
		printf("the result %d \n", result[i]);
		i++;
	}
	return (0);
} */