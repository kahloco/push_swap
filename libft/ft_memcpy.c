/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:09:25 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/02 18:30:41 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[20];
	char src[] = "I am copied from source!";
	printf("Before ft_memcpy() dst = %s\n", dst);
	ft_memcpy(dst, src, 24);
	printf("After ft_memcpy() dst = %s\n", dst);
	memcpy(dst, src, 24);
	printf("After memcpy() dst = %s\n", dst);
	return (0);
}
*/