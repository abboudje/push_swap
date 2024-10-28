#include "push_swap.h"
/* 
void	check_duplicates(int *unordered, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (unordered[i] == unordered[j])
			{
				free(unordered);
				error_message("Error\n");
			}
			++j;
		}
	}
}

void	check_num1(char *num, char **temp)
{
	int	len;

	len = ft_strlen(num);
	if ((num[0] == '+' || num[0] == '-') && num[1] == '0')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '0' && num[1] != '\0')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '-' && num[1] == '\0')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '+' && num[1] == '\0')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (len < 10)
		return ;
	else if (((num[0] == '+' || num[0] == '-') && len > 11)
		|| (ft_isdigit(num[0]) == 1 && len > 10))
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '+' && (ft_strncmp(num, "+2147483647", len) > 0))
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '-' && (ft_strncmp(num, "-2147483648", len) > 0))
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (ft_strncmp(num, "2147483647", len) > 0)
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
}

void	check_num(char *num, char **temp, int *nums_count)
{
	int	i;

	i = 0;
	*nums_count += 1;
	if (!ft_isdigit(num[0]) && num[0] != '+' && num[0] != '-')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	while (num[++i])
		if (!ft_isdigit(num[i]))
			free_and_exit(temp, get_matrix_size(temp), "Error\n");
	check_num1(num, temp);
} */

/* int	get_len_inputs(char **argv)
{
	int		i;
	int		j;
	char	**temp;
	int		nums_count;

	i = 0;
	nums_count = 0;
	while (argv[++i])
	{
		temp = ft_split(argv[i], ' ');
		if (!temp)
			print_error();
		else if (temp[0] == NULL)
			free_matrix(temp, 1);
		else
		{
			j = -1;
			while (temp[++j])
				check_num(temp[j], temp, &nums_count);
			free_matrix(temp, get_matrix_size(temp));
		}
	}
	return (nums_count);
} */

char *ft_get_str(int argc, char **argv)
{
	char	*str;
	char	*temp;
	int	*nbs;
	int	i;
	int	total_len;

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
		{
			str = temp;
		}
		i++;
	}
	//total_len = ft_total_len(argc, argv);
	//str = ft_get_str(argc, argv, total_len);
	printf("*%s*", str);
	//free(temp);
	return (str);
}



int	parsing_inputs(int argc, char **argv)
{
	char	*str;
	ft_get_str(argc, argv);
	//printf("le = %d \n", total_len);	
	return (0);
}
