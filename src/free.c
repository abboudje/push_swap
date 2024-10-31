/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:06:29 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/31 14:15:28 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(char **lst, int size)
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

void	free_all(t_stack *st_a, t_stack *st_b, int *a1, int *a2)
{
	t_lst	*temp;
	int		i;

	i = -1;
	while (++i < st_a->nodes)
	{
		temp = st_a->head;
		st_a->head = st_a->head->next;
		free(temp);
	}
	if (st_b->head)
	{
		i = -1;
		while (++i < st_a->nodes)
		{
			temp = st_a->head;
			st_a->head = st_a->head->next;
			free(temp);
		}
	}
	free(a1);
	free(a2);
}

void	free_stack(t_stack *stack, int size)
{
	int		j;
	t_lst	*temp;

	j = -1;
	while (++j < size)
	{
		temp = stack->head->next;
		free(stack->head);
		stack->head = temp;
	}
}
