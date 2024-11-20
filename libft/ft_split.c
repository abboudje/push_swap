/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:19:13 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/30 12:18:23 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	cmp;
	size_t	i;
	int		is_word;

	cmp = 0;
	is_word = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && !is_word)
		{
			cmp++;
			is_word = 1;
		}
		else if (s[i] == c && is_word)
		{
			is_word = 0;
		}
		i++;
	}
	return (cmp);
}

int	set_table(char **table, const char *s, char c)
{
	size_t	index_s;
	size_t	index_tab;
	size_t	size_word;

	index_s = 0;
	index_tab = 0;
	while (s[index_s])
	{
		size_word = 0;
		while (s[index_s] && s[index_s] == c)
			index_s++;
		while (s[index_s + size_word] && s[index_s + size_word] != c)
			size_word++;
		if (size_word > 0)
		{
			table[index_tab] = malloc((size_word + 1) * sizeof(char));
			if (!table[index_tab])
				return (0);
			ft_strlcpy(table[index_tab], (s + index_s), size_word + 1);
			index_tab++;
			index_s += size_word;
		}
	}
	table[index_tab] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	size_t	count;		
	size_t	index_free;

	index_free = 0;
	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	table = malloc((count + 1) * sizeof(char *));
	if (!table)
		return (NULL);
	if (!set_table(table, s, c))
	{
		while (table[index_free])
		{
			free(table[index_free]);
			index_free++;
		}
		free(table);
		return (NULL);
	}
	return (table);
}

/* int	main(int ac, char **av)
{
	char	**result;

	if (ac != 3)
		return (-1);
	result = ft_split(av[1], av[2][0]);
	if (!result)
		return (-1);
	while (*result)
	{
		printf("%s \n", *result);
		result++;
	}
} */
