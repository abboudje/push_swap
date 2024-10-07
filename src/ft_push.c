/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:51:12 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/07 15:27:11 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	str1(t_stack *a)
{
	t_node *first = a->top;
	t_node *second = first->next;
	if (first->value > second->value)
		swap(a);
}

void	str2(t_stack *a)
{
	//t_node	*first = a->top;
	
	if (is_top_max(a))
		rotation(a);
	if (is_last_min(a))
		re_retation(a);
	if (is_first_sup_second(a))
		swap(a);
}

void	ft_algo(t_stack *stack)
{
	static int	len = 0;
	if (!is_in_order(stack))
	{
		len = count(stack);
		if (len == 2)
			str1(stack);
		else if(len == 3)
			str2(stack);
	}
	else
		printf("");
}

