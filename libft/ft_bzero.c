/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:42:58 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/02 18:04:24 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*str++ = 0;
		n--;
	}
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char string[5] = "Hola";
	printf("Before ft_bzero():%s\n", string);
	ft_bzero(string + 2, 2);
	bzero(string + 2, 2);
	printf("After ft_bzero():%s\n", string);
	printf("After bzero():%s\n", string);
	return (0);
}
*/