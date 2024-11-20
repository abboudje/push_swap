/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:10:18 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/29 15:11:35 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_tostring(long nbr)
{
	char	*ptr;
	int		is_negative;
	int		len;

	len = ft_nbrlen(nbr);
	is_negative = 0;
	if (nbr < 0)
	{
		is_negative = 1;
		nbr = -nbr;
	}
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (nbr)
	{
		ptr[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (is_negative)
		ptr[0] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	nbr;

	nbr = n;
	if (nbr == 0)
	{
		ptr = malloc(2 * sizeof(char));
		if (!ptr)
			return (NULL);
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	return (ft_tostring(nbr));
}

/* int	main(int ac, char **av)
{
	char	*result;

	if (ac != 2)
		return (-1);
	result = ft_itoa(atoi(av[1]));
	printf("%s \n", result);
	return (0);
} */