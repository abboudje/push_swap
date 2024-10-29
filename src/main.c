/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:31:40 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/29 03:33:43 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sizeof_table(char **tab)
{
	int size;

	size = 0;
	while (tab[size])
		size++;
	return (size);
}

int	is_unique(int *unordered, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (unordered[i] == unordered[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	freeing(char **lst, int *nbrs,int size)
{
	free(nbrs);
	--size;
	while (size >= 0)
	{
		free(lst[size]);
		lst[size] = NULL;
		--size;
	}
	free(lst);
	lst = NULL;
}
void ft_push_swap(int *nbrs, int size)
{
	printf("Impliment the algo");
}

int	main(int argc, char **argv)
{
	char	**lst;
	int		size;
	int		*nbrs;
	int		*sorted;
	t_stack	stack_a;
	t_stack	stack_b;
	// Make Parsing
	// I have to rename the varbs 
	//init_stack(&stack_b, &sorted);
	lst = parsing_inputs(argc, argv);
	size = sizeof_table(lst);
 	printf("size = %d \n", size);
	nbrs = convert_to_int(lst, size);
	int i = 0;
	if (!is_unique(nbrs, size))
	{
		freeing(lst, nbrs, size);
		print_error();
	}
	ft_push_swap(nbrs, size);
	// Make the algo
}
