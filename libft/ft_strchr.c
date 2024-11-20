/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:10:33 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/22 11:07:47 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (ch == '\0')
	{
		return ((char *)(s + i));
	}
	return (NULL);
}

/* int main(int ac, char **av)
{
	if (ac == 1)
		return (-1);
	char *result = ft_strchr(av[1], av[2][0]);
	printf("the value of pointure is %s", result);	
} */