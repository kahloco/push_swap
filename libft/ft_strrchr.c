/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:59:35 by ckakoz            #+#    #+#             */
/*   Updated: 2024/06/10 08:59:08 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char const	*last;

	last = 0;
	while (*str)
	{
		if (*str == (char)c)
			last = str;
		++str;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)last);
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
    char *str = "hola hola que tal";
    char *strr = ft_strrchr(str, 'o');
    printf("My function: %s\n", strr);
	printf("Original function: %s\n", strrchr(str, 'o'));
    return (0);
}
*/
