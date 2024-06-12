/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:26:29 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/03 18:27:04 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n)
	{
		while (n--)
		{
			if (*str1 != *str2)
				return (*str1 - *str2);
			str1++;
			str2++;
		}
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
    char *str = "hola";
    char *str2 = "hosa";
    printf("My function: %d\n", ft_memcmp(str, str2, 3));
    printf("Original function: %d\n", memcmp(str, str2, 3));
    return (0);
}
*/
