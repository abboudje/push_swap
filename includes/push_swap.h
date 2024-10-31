/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:54:14 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/31 14:28:19 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdlib.h>
# include<stdbool.h>
# include<unistd.h>
# include "libft.h"

typedef struct s_lst
{
	int				value;
	int				index;
	struct s_lst	*next;
	struct s_lst	*prev;
}	t_lst;

typedef struct s_stack
{
	t_lst	*head;
	t_lst	*tail;
	int		nodes;
}	t_stack;
/*************************MAIN.C ************************/
int		sizeof_table(char **tab);
int		is_unique(int *unordered, int size);
void	ft_push_swap(int *nbrs, int size);
/****************************ALGO.C*****************************/
void	find_max_and_push_b(t_lst *lst, t_stack *stack_a, int size);
void	find_max_and_push_a(t_lst *lst, t_stack *stack_b, int size);
void	sort_stack(t_stack *st_a, t_stack *st_b);
void	make_butterfly(t_stack *st_a, t_stack *st_b, int chunk);
void	butterfly_algo(t_stack *st_a, t_stack *st_b, int size);
/***************************STACK.C ************************/
void	sort_2(int *tab, int *sorted);
void	sort_3(t_stack *stack_a);
void	sort_4(t_stack *stack_a, t_stack *stack_b, int size);
void	sort_5(t_stack *stack_a, t_stack *stack_b, int size);
/*****************************CREATE STACK*****************************/
void	init_stack(t_stack *st_b, int **sorted);
int		find_index(int *arr, int value, int size);
t_lst	*make_lst(t_stack *stack, int *arrays[], int size, int i);
void	make_stack_a(t_stack *stack, int *unordered, int *sorted, int size);
/**************************** MOVES.C **********************************/
void	swap_stack(t_stack *stack, char *action);
void	rotate_stack(t_stack *stack, char *action);
void	reverse_rotate_stack(t_stack *stack, char *action);
void	push_stack(t_stack *from, t_stack *to, char *action);
void	push_stack_2(t_stack *from, char *action);
/******************************SORT.C***********************************/
void	bubble_sort(int *tab, int size);
int		*copy_into_sorted(int *tab, int size);
bool	is_sorted(int *tab, int size);
/*************************PARSING.C **********************/
char	*ft_get_str(int argc, char **argv);
int		is_big(char *str);
int		is_all_numbers(char **lst);
int		*convert_to_int(char **lst, int size);
char	**parsing_inputs(int argc, char **argv);
/**************************CORE.C************************/
int		is_number(char *str);
void	ft_print(char *str);
int		generate_chunk(int size);
void	exit_with_error(void);
/*****************************FREE.C********************* */
void	free_list(char **lst, int size);
void	free_all(t_stack *st_a, t_stack *st_b, int *a1, int *a2);
void	free_stack(t_stack *stack, int size);
#endif
