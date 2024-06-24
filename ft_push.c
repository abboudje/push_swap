/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:51:12 by abboudje          #+#    #+#             */
/*   Updated: 2024/06/19 16:26:52 by abboudje         ###   ########.fr       */
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
		printf("is in order\n");
}

int	main(int ac, char **av)
{
	t_stack	*a;
	int		i;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (-1);
	a->top = NULL;
	i = 1;
	while (i < ac)
	{
		push(a, atoi(av[i]));
		i++;
	}
	print(a);
	//re_retation(a);
	ft_algo(a);
	print(a);
	freeing(a);
}