/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:31:40 by abboudje          #+#    #+#             */
/*   Updated: 2024/10/25 03:21:00 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int *parsing(int argc, char **argv)
{
	char *str = argv[1];
	char **list = ft_split(argv[1], ' ');
	
	str = NULL;
	list = NULL;
	argc = 0;
	return (NULL);
} 

void print_list(int *list, int len)
{
	int	i;

	i = 0;
	if (!list)
		return;
	printf("{");
	while (i < len)
	{
		printf("*%d", list[i]);
		i++;
	}
	printf("}\n");
}

int list_to_stack(int *list, int len)
{
	t_stack	*a;
	int		d;

	d = 4;
	a = malloc(sizeof(t_stack));
	if (!a)
		return (-1);
	a->top = NULL;
	while (len > 1)
	{
		push(a, list[--len]);
	}
	print(a);
	ft_algo(a);
	freeing(a);
	return 0;
}
int	main(int argc, char **argv)
{
	int *list2 = NULL;
	(void)list2;
	// Parsing
	parsing(argc, argv);
	int list[] = {3, 4, 5, 6};
	int len = sizeof(list)/sizeof(list[0]);
	print_list(list, len);
	// get Algo that work

	// Impliment the  basic fuctions
	 
	// make the logic 

	// fix the path 

}
