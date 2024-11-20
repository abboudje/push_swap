/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:58:33 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/22 11:21:23 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	i = ft_strlen(s);
	ch = (char)c;
	while (i > 0)
	{
		if (s[i] == ch)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	if (s[0] == ch)
	{
		return ((char *)(s));
	}
	return (NULL);
}

/*  int main(int ac, char **av)
{
	if (ac == 1)
		return (-1);
	char *result = ft_strrchr(av[1], av[2][0]);
	printf("the value of pointure is %s", result);	
}  */