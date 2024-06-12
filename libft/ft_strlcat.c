/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:59:15 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/03 11:31:30 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_size;
	unsigned int	s_size;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	d_size = i;
	s_size = ft_strlen(src);
	if (dstsize == 0 || dstsize <= d_size)
		return (s_size + dstsize);
	while (src[j] != '\0' && j < dstsize - d_size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (d_size + s_size);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    char dst[20] = "hi, ";
    char src[] = "how are you";
    printf("Destination before function: %s\n", dst);
	size_t length = ft_strlcat(dst, src, sizeof(dst));
	printf("Destination after function: %s\n", dst);
	printf("Length: %zu\n", length);
	return (0);
}
*/
