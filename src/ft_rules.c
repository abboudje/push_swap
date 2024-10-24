/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:02:59 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/24 19:29:25 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	int		c;

	first = stack->top;
	second = first->next;
	c = first->value;
	first->value = second->value;
	second->value = c;
	printf("sa\n");
}

void	rotation(t_stack *stack)
{
	t_node	*top;
	t_node	*current;

	top = stack->top;
	current = top->next;
	while (current->next)
		current = current->next;
	stack->top = top->next;
	current->next = top;
	top->next = NULL;
	printf("ra\n");
}

void	re_retation(t_stack *stack)
{
	t_node	*prev;
	t_node	*current;

	prev = NULL;
	current = stack->top;
	while (current->next)
	{
		prev = current;
		current = current->next;
	}
	current->next = stack->top;
	stack->top = current;
	prev->next = NULL;
	printf("rra\n");
}
