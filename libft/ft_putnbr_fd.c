/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:51:27 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/30 13:11:31 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_nbr(long nbr, int fd)
{
	char	mod;

	mod = (nbr % 10) + '0';
	nbr /= 10;
	if (nbr != 0)
		print_nbr(nbr, fd);
	write(fd, &mod, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	print_nbr(nbr, fd);
}

/* 	ptr = ft_itoa(n);
	write(fd, ptr, ft_strlen(ptr));
	free(ptr); */
/* int	main(int ac, char **av)
{
	if (ac != 2)
		return (-1);
	ft_putnbr_fd(atoi(av[1]), 1);
} */