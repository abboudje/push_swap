/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:51:12 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/09 19:21:06 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stack *a)
{
	t_node *first = a->top;
	t_node *second = first->next;
	if (first->value > second->value)
		swap(a);
}

void	sort3(t_stack *a)
{
	//t_node	*first = a->top;
	
	if (is_top_max(a))
		rotation(a);
	if (is_last_min(a))
		re_retation(a);
	if (is_first_sup_second(a))
		swap(a);
}
void	sort45(t_stack *stack_a)
{
	
}

void	ft_algo(t_stack *stack_a)
{
	static int	len = 0;
	if (!is_in_order(stack_a))
	{
		len = count(stack_a);
		if (len == 2)
			sort2(stack_a);
		else if(len == 3)
			sort3(stack_a);
		else if(len == 4 || len == 5)
			sort45(stack_a);
	}
	else
		printf("");
}

