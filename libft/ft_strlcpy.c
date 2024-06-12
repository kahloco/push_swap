/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:26:56 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/02 22:01:02 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	const char	source[] = "I am copied from source!";
	char 	dest[30];
	size_t 	n = ft_strlcpy(dest, source, sizeof(dest));
	printf("Length: %zu\n", n);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", dest);
	return (0);
}
*/