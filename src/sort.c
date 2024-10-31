/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:42:22 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/31 14:17:58 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = -1;
	while (++i < size - 1)
	{
		j = -1;
		while (++j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}

int	*copy_into_sorted(int *tab, int size)
{
	int	*result;
	int	i;

	i = -1;
	result = (int *)malloc(sizeof(int) * size);
	if (!result)
	{
		free(tab);
		exit(0);
	}
	while (++i < size)
		result[i] = tab[i];
	bubble_sort(result, size);
	return (result);
}

bool	is_sorted(int *tab, int size)
{
	int	i;

	i = 0;
	if (size < 2)
	{
		free(tab);
		exit(0);
	}
	while (++i < size)
	{
		if (tab[i] <= tab[i - 1])
			return (false);
	}
	return (true);
}
