#include "push_swap.h"

char *ft_get_str(int argc, char **argv)
{
	char	*str;
	char	*temp;
	int		i;

	if (argc < 2)
		exit(0);
	str = ft_strdup("");// Initialiation
	i = 1;
	while (i < argc)
	{
		temp = ft_strjoin(str, argv[i]);
		free(str);
		if (i < argc - 1)
		{
			str = ft_strjoin(temp, " ");
			free(temp);
		}
		else
			str = temp;
		i++;
	}
	return (str);
}

int is_big(char *str)
{
	int	size;

	size = ft_strlen(str);
	//printf("size is = %d \n", size);
	if (str[0] == '+' && (size > 10) && (ft_strncmp(str, "+2147483647", size) > 0))
		return (1);
	else if (str[0] == '-' && (size > 10) && (ft_strncmp(str, "-2147483648", size) > 0))
		return (1);
	else if ((size > 9) && ft_strncmp(str, "2147483647", size) > 0)
		return (1);
	return (0);
}

int	is_all_numbers(char **lst)
{
	int	i;

	if (!lst[0])
		return (0);
	i = 0;
	while (lst[i])
	{
		if(!is_number(lst[i]))
			return (0);
		if(is_big(lst[i]))
			return (0);
		i++;
	}
	return (1);
}
int *convert_to_int(char **lst, int size)
{
	int	i;
	int	*nbrs;

	size = 0;
	while (lst[size])
		size++;
	nbrs = (int *)malloc(sizeof(int) * size);
	if (!nbrs)
		return (NULL);
	i = 0;
	while (i < size)
	{
		nbrs[i]  = ft_atoi(lst[i]);
		i++;
	}
	//printf("size is %d", size);
	return nbrs;
}

char	**parsing_inputs(int argc, char **argv)
{
	char	*str;
	char	**lst;
	int		i;

	str =  ft_get_str(argc, argv);
	lst = ft_split(str, ' ');
	free(str);
	if(!is_all_numbers(lst))
	{
		i = 0;
		while (lst[i])
			free(lst[i++]);
		free(lst);
		lst = NULL;
		exit_with_error();
	}
		return (lst);
	return (NULL);
}

