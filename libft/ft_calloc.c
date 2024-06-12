/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:44:36 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/04 09:47:49 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>
int main (void)
{
	size_t nmemb = 5;
	size_t size = sizeof(int);
	int *ptr = (int *)ft_calloc(nmemb, size);
	if (ptr != NULL)
	{
		printf("Memory allocated\n");
		for (size_t i = 0; i < nmemb; i++)
		{
			printf("%d\n", ptr[i]);
		}
		for (size_t i = 0; i < nmemb; i++)
		{
			ptr[i] = i * 2;
		}
		printf("Modifying memory\n");
		for (size_t i = 0; i < nmemb; i++)
		{
			printf("%d\n", ptr[i]);
		}
		free(ptr);
	}
	else
		printf("Memory not allocated\n");
	return (0);
}
*/