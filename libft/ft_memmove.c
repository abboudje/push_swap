/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:10:34 by abboudje          #+#    #+#             */
/*   Updated: 2024/05/21 12:25:58 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}

/*  #include<string.h>
 	int	main(int ac, char **av)
 {
 	 char str[] = "hello neo!";
 	 char str3[] = "hello neo!";
 	 char str2[] = "hello neo!";
 	memcpy(str +2, str , 5);
     ft_memmove(str3+2, str3 , 5);
     memmove(str2+2, str2 , 5);
     printf("str1 : %s \n", str);
     printf("str2 : %s \n", str2);
     printf("str3 : %s \n", str3);
     return 0;
 } */