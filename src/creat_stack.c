/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:56:13 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/31 15:39:12 by abboudje         ###   ########.fr       */
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

void	init_stack(t_stack *st_b, int **sorted)
{
	st_b->head = NULL;
	st_b->tail = NULL;
	st_b->size = 0;
	*sorted = NULL;
}

t_node	*add_node(t_stack *stack, int *arrays[], int size, int i)
{
	t_node	*new_node;
	t_node	*current;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		exit_with_error();
	if (i == 0)
	{
		new_node->value = arrays[0][0];
		new_node->index = find_index(arrays[1], new_node->value, size);
		new_node->prev = NULL;
	}
	else
	{
		current = stack->head;
		while (current->next != NULL)
			current = current->next;
		new_node->value = arrays[0][i];
		new_node->index = find_index(arrays[1], new_node->value, size);
		current->next = new_node;
		new_node->prev = current;
	}
	stack->tail = new_node;
	new_node->next = NULL;
	return (new_node);
}

void	make_stack_a(t_stack *stack, int *tab, int *sorted, int size)
{
	int	i;
	int	*arrays[2];

	stack->head = NULL;
	stack->tail = NULL;
	arrays[0] = tab;
	arrays[1] = sorted;
	stack->head = add_node(stack, arrays, size, 0);
	i = 0;
	while (++i < size)
		add_node(stack, arrays, size, i);
	stack->tail->next = stack->head;
	stack->head->prev = stack->tail;
	stack->size = size;
}
