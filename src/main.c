/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:31:40 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/30 11:53:24 by abboudje         ###   ########.fr       */
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

void free_list(char **lst,int  size)
{
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

void ft_push_swap(int *tab, int size)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		*sorted;

	init_stack(&stack_b, &sorted);
	if (is_sorted(tab, size))
	{
		free(tab);
		exit(0);
	}
	sorted = copy_into_sorted(tab, size);
 	if (size == 2)
	{
		ft_printf("sa");
		free(sorted);
		free(tab);
	}
	else if (size >= 3)
	{
		make_stack_a(&stack_a, tab, sorted, size);
		if (size >= 3 && size <= 5)
		{
			forbbiden_sorting(size, &stack_a, &stack_b);
		}
		else
			butterfly_algo(&stack_a, &stack_b, size);
		free_all(&stack_a, &stack_b, tab, sorted); 
	}
}

int	main(int argc, char **argv)
{
	char	**lst;
	int		size;
	int		*tab;

	// Make Parsing
	// I have to rename the varbs 
	lst = parsing_inputs(argc, argv);
	size = sizeof_table(lst);
 	//printf("size = %d \n", size);
	tab = convert_to_int(lst, size);
	free_list(lst, size);	
	if (!is_unique(tab, size))
	{
		free(tab);
		exit_with_error();
	}
	ft_push_swap(tab, size);
	// Make the algo
}
