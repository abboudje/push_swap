#include "push_swap.h"

/* void	ft_free(int *unordered, int *sorted, char *sms)
{
	free(unordered);
	free(sorted);
	//error_message(sms);
}


void	free_list_and_exit(t_stack *stack, int *arrays[], int i)
{
	int		j;
	t_lst	*temp;

	j = -1;
	free(arrays[0]);
	free(arrays[1]);
	while (++j < i)
	{
		temp = stack->head->next;
		free(stack->head);
		stack->head = temp;
	}
	exit_with_error();
}
*/
void	free_all(t_stack *st_a, t_stack *st_b, int *a1, int *a2)
{
	t_lst	*temp;
	int		i;

	i = -1;
	while (++i < st_a->nodes)
	{
		temp = st_a->head;
		st_a->head = st_a->head->next;
		free(temp);
	}
	if (st_b->head)
	{
		i = -1;
		while (++i < st_a->nodes)
		{
			temp = st_a->head;
			st_a->head = st_a->head->next;
			free(temp);
		}
	}
	free(a1);
	free(a2);
} 