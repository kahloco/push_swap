/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:50:28 by ckakoz            #+#    #+#             */
/*   Updated: 2024/06/10 08:58:48 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char string[] = "how are ya!";
	char c = 'w';
	printf("My function: %s\n", ft_strchr(string, c));
    printf("Original function: %s\n", strchr(string, c));
	return (0);
}
*/
