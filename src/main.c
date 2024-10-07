/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:31:40 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/07 15:48:46 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int ac, char **av)
{
	t_stack	*a;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (-1);
	a->top = NULL;
	while (ac > 1)
	{
		push(a, atoi(av[--ac]));
	}
	print(a);
	
	ft_algo(a);
	freeing(a);
}