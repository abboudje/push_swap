/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:42 by abboudje          #+#    #+#             */
/*   Updated: 2024/06/19 15:56:14 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int nbr)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		exit(1);
	node->next = stack->top;
	node->value = nbr;
	stack->top = node;
}

void	print(t_stack *stack)
{
	t_node	*tab;

	tab = stack->top;
	printf("*******stack********\n");
	while (tab)
	{
		printf("%d \n", tab->value);
		tab = tab->next;
	}
	printf("******fin stack******\n");
}

void	freeing(t_stack *stack)
{
	t_node	*current;
	t_node	*next;
	
	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(stack);
}