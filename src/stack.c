#include "push_swap.h"

void	init_stack(t_stack *st_b, int **sorted)
{
	st_b->head = NULL;
	st_b->tail = NULL;
	st_b->nodes = 0;
	*sorted = NULL;
}


void	triple_sort(t_stack *stack_a)
{
	int	arr[3];

	arr[0] = stack_a->head->index;
	arr[1] = stack_a->head->next->index;
	arr[2] = stack_a->head->next->next->index;
	if (arr[0] == 0 && arr[1] == 2)
	{
		reverse_rotate_stack(stack_a, "rra");
		swap_stack(stack_a, "sa");
	}
	else if (arr[0] == 0 && arr[1] == 1)
		return ;
	else if (arr[0] == 1 && arr[1] == 0)
		swap_stack(stack_a, "sa");
	else if (arr[0] == 1 && arr[1] == 2)
		reverse_rotate_stack(stack_a, "rra");
	else if (arr[0] == 2 && arr[1] == 0)
		rotate_stack(stack_a, "ra");
	else if (arr[0] == 2 && arr[1] == 1)
	{
		swap_stack(stack_a, "sa");
		reverse_rotate_stack(stack_a, "rra");
	}
}

void	fourple_sort(t_stack *stack_a, t_stack *stack_b, int size)
{
	t_lst	*lst;

	lst = stack_a->head;
	find_max_and_push_b(lst, stack_a, size);
	push_stack(stack_a, stack_b, "pb");
	triple_sort(stack_a);
	push_stack(stack_b, stack_a, "pa");
	rotate_stack(stack_a, "ra");
}

void	fiveple_sort(t_stack *stack_a, t_stack *stack_b, int size)
{
	t_lst	*lst;

	lst = stack_a->head;
	find_max_and_push_b(lst, stack_a, size);
	push_stack(stack_a, stack_b, "pb");
	lst = stack_a->head;
	find_max_and_push_b(lst, stack_a, size - 1);
	push_stack(stack_a, stack_b, "pb");
	triple_sort(stack_a);
	push_stack(stack_b, stack_a, "pa");
	rotate_stack(stack_a, "ra");
	push_stack(stack_b, stack_a, "pa");
	rotate_stack(stack_a, "ra");
}

void	forbbiden_sorting(int size, t_stack *stack_a, t_stack *stack_b)
{
	print_stack(stack_a, size);
	if (size == 3)
		triple_sort(stack_a);
	else if (size == 4)
		fourple_sort(stack_a, stack_b, size);
	else
		fiveple_sort(stack_a, stack_b, size);
}

