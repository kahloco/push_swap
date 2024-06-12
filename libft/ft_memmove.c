/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:03:54 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/02 21:24:34 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	if (dest > source)
		while (len-- > 0)
			dest[len] = source[len];
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char dest[20] = "Hi    how are you?";
	char src[] = "Hello";
	printf("Before function called, dest = %s\n", dest);
	ft_memmove(dest, src, 5);
	printf("Using my function: %s\n", dest);
	memmove(dest, src, 5);
	printf("Using memmove function: %s\n", dest);
	return (0);
}
*/