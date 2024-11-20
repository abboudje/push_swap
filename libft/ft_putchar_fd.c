/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:17:11 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/29 16:23:28 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(int ac, char **av)
{
	if (ac != 3)
		return (-1);
	ft_putchar_fd(av[1][0], atoi(av[2]));
	return (0);
} */