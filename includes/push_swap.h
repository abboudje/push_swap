/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:54:14 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/07 15:46:10 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}t_node;

typedef struct s_stack
{
	t_node	*top;
}t_stack;

/***************stack file*******************/
void	push(t_stack *stack, int nbr);
void	print(t_stack *stack);
void	freeing(t_stack *stack);
/***************rules file*******************/
void	swap(t_stack *stack);
void	rotation(t_stack *stack);
void	re_retation(t_stack *stack);
/***************utile file*******************/
bool	is_top_max(t_stack *a);
bool	is_last_min(t_stack *a);
bool	is_in_order(t_stack *stack);
bool	is_first_sup_second(t_stack *stack);
int		count(t_stack *stack);
void	ft_algo(t_stack *stack);

#endif
