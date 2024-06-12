/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:13:39 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/03 13:18:52 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i])
	{
		if (i < n - 1)
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h> 
int main(void)
{
    char str1[] = "Compare me";
    char str2[] = "Compare me too";
    printf("My function: %d\n", strncmp(str1, str2, 10));
    printf("Original function: %d\n", ft_strncmp(str1, str2, 10));
    return (0);
}
*/
