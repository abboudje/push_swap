/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:56:13 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/29 19:00:25 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(int *arr, int value, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (arr[i] == value)
			return (i);
	}
	return (0);
}

t_lst	*make_lst(t_stack *stack, int *arrays[], int size, int i)
{
	t_lst	*new_lst;
	t_lst	*temp_head;

	new_lst = malloc(sizeof(t_lst));
	if (!new_lst)
		exit_with_error();
	if (i == 0)
	{
		new_lst->value = arrays[0][0];
		new_lst->index = find_index(arrays[1], new_lst->value, size);
		new_lst->prev = NULL;
	}
	else
	{
		temp_head = stack->head;
		while (temp_head->next != NULL)
			temp_head = temp_head->next;
		new_lst->value = arrays[0][i];
		new_lst->index = find_index(arrays[1], new_lst->value, size);
		temp_head->next = new_lst;
		new_lst->prev = temp_head;
	}
	stack->tail = new_lst;
	new_lst->next = NULL;
	return (new_lst);
}

void	make_stack_a(t_stack *stack, int *unordered, int *sorted, int size)
{
	int	i;
	int	*arrays[2];

	stack->head = NULL;
	stack->tail = NULL;
	arrays[0] = unordered;
	arrays[1] = sorted;
	stack->head = make_lst(stack, arrays, size, 0);
	i = 0;
	while (++i < size)
		make_lst(stack, arrays, size, i);
	stack->tail->next = stack->head;
	stack->head->prev = stack->tail;
	stack->nodes = size;
}

void	free_stack(t_stack *stack , int size)
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