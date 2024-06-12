/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:11:22 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/03 18:19:50 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (n)
	{
		while (n--)
		{
			if (*str == (unsigned char)c)
				return (str);
			str++;
		}
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
	const char str[] = "Hello World";
	char c = 'a';
	size_t size = sizeof(str);
	void *result = memchr(str, c, size);
	if (result)
		printf("Original function: Chraracter '%c' 
		found at %ld\n", c, (char *)result - str + 1);
	else
		printf("Original function: Character '%c' not found\n", c);	
	void *my_result = ft_memchr(str, c, size);
	if (my_result)
		printf("My function: Chraracter '%c' 
		found at %ld\n", c, (char *)my_result - str + 1);
	else
		printf("My function: Character '%c' not found\n", c);	
    return (0);
}
*/