/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:23:36 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/31 15:39:12 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_stack *stack, char *action)
{
	int	temp;

	ft_print(action);
	temp = stack->head->value;
	stack->head->value = stack->head->next->value;
	stack->head->next->value = temp;
	temp = stack->head->index;
	stack->head->index = stack->head->next->index;
	stack->head->next->index = temp;
}

void	rotate_stack(t_stack *stack, char *action)
{
	if (stack->size <= 1)
		return ;
	ft_print(action);
	stack->head = stack->head->next;
	stack->tail = stack->tail->next;
}

void	reverse_rotate_stack(t_stack *stack, char *action)
{
	ft_print(action);
	stack->head = stack->head->prev;
	stack->tail = stack->tail->prev;
}

void	push_stack(t_stack *from, t_stack *to, char *action)
{
	t_node	*new_lst;

	new_lst = malloc(sizeof(t_node));
	if (!new_lst)
		exit_with_error();
	++to->size;
	new_lst->value = from->head->value;
	new_lst->index = from->head->index;
	if (to->head == NULL)
	{
		new_lst->next = NULL;
		new_lst->prev = NULL;
		to->head = new_lst;
		to->tail = new_lst;
	}
	else
	{
		new_lst->next = to->head;
		new_lst->prev = to->tail;
		to->head->prev = new_lst;
		to->head = new_lst;
		to->tail->next = to->head;
	}
	push_stack_2(from, action);
}

void	push_stack_2(t_stack *from, char *action)
{
	if (from->size == 1)
	{
		free(from->head);
		from->head = NULL;
		from->tail = NULL;
	}
	else if (from->size == 2)
	{
		from->tail->next = NULL;
		from->tail->prev = NULL;
		free(from->head);
		from->head = from->tail;
	}
	else
	{
		from->head->next->prev = from->tail;
		from->tail->next = from->head->next;
		free(from->head);
		from->head = from->tail->next;
	}
	--from->size;
	ft_print(action);
}
