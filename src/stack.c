#include "push_swap.h"

void	init_stack(t_stack *st_b, int **sorted)
{
	st_b->head = NULL;
	st_b->tail = NULL;
	st_b->nodes = 0;
	*sorted = NULL;
}

void	print_error()
{
	write(2, "Error\n", 6);
	exit(-1);
}


