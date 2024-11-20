/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:56:07 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/20 16:08:34 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

/*   int	main(int ac, char **av)
{	
	if (ac < 2)
		return (-1);
	int tab[10];
	size_t size = sizeof(tab);
	ft_memset(tab, 255, size);
	int i = 0;
	//printf("size is : %zu \n", size);
	printf("byts  is : %zu \n", size);
	while (i < 10)
	{
		printf("%d |", tab[i]);
		i++;
	}
	return (0);
		printf("Byte %zu: %u\n", i+1, *(unsigned char *)(s + i)); 

}  */