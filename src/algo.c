/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:44:02 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/31 18:38:47 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_max_a_to_b(t_node *current, t_stack *stack_a, int size)
{
	int	i;
	int	is_tail;

	i = 0;
	is_tail = 0;
	while (is_tail == 0)
	{
		if (current->index == size - 1)
		{
			if (i > size - i - 1)
			{
				while (i++ != size)
					reverse_rotate_stack(stack_a, "rra");
			}
			else
				while (i-- > 0)
					rotate_stack(stack_a, "ra");
			break ;
		}
		++i;
		current = current->next;
		if (current == stack_a->head)
			is_tail = 1;
	}
}

void	push_max_b_to_a(t_node *current, t_stack *stack_b, int size)
{
	int	i;
	int	is_tail;

	i = 0;
	is_tail = 0;
	while (is_tail == 0)
	{
		if (current->index == size - 1)
		{
			if (i > size - i - 1)
			{
				while (i++ != size)
					reverse_rotate_stack(stack_b, "rrb");
			}
			else
				while (i-- > 0)
					rotate_stack(stack_b, "rb");
			break ;
		}
		++i;
		current = current->next;
		if (current == stack_b->head)
			is_tail = 1;
	}
}

void	sort_stack(t_stack *st_a, t_stack *st_b)
{
	t_node	*current;

	while (st_b->head != NULL)
	{
		current = st_b->head;
		push_max_b_to_a(current, st_b, st_b->size);
		push_stack(st_b, st_a, "pa");
	}
}

void	make_butterfly(t_stack *st_a, t_stack *st_b, int chunk)
{
	int		index_b;
	t_node	*current;

	index_b = 0;
	current = st_a->head;
	while (st_a->head != NULL)
	{
		if (current->index <= index_b)
		{
			push_stack(st_a, st_b, "pb");
			rotate_stack(st_b, "rb");
			++index_b;
		}
		else if (current->index <= index_b + chunk)
		{
			push_stack(st_a, st_b, "pb");
			++index_b;
		}
		else
			rotate_stack(st_a, "ra");
		current = st_a->head;
	}
}

void	butterfly_algo(t_stack *st_a, t_stack *st_b, int size)
{
	int	chunk;

	chunk = generate_chunk(size);
	make_butterfly(st_a, st_b, chunk);
	sort_stack(st_a, st_b);
}
