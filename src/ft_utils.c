/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:04:53 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/24 19:28:29 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_top_max(t_stack *a)
{
	t_node	*first;
	t_node	*next;

	first = a->top;
	next = first->next;
	while (next)
	{
		if (first->value < next->value)
			return (false);
		next = next->next;
	}
	return (true);
}

bool	is_last_min(t_stack *a)
{
	t_node	*last;
	t_node	*current;

	last = a->top;
	while (last->next)
		last = last->next;
	current = a->top;
	while (current != last)
	{
		if (current->value < last->value)
			return (false);
		current = current->next;
	}
	return (true);
}

bool	is_first_sup_second(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	first = stack->top;
	second = first->next;
	return (first->value > second->value);
}

bool	is_in_order(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack->top;
	while (current && current->next)
	{
		next = current->next;
		if (current->value > next->value)
			return (false);
		current = next;
	}
	return (true);
}

int	count(t_stack *stack)
{
	int		count;
	t_node	*a;

	a = stack->top;
	count = 0;
	while (a)
	{
		count++;
		a = a->next;
	}
	return (count);
}
