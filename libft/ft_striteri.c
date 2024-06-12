/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:07:25 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/05 14:30:42 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void uppercase(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper((unsigned char)*c);
	else
		*c = ft_tolower((unsigned char)*c);
}

int main ()
{
	char str[] = "Hello, my name is Chris";
	printf("Original string: %s\n", str);
	ft_striteri(str, uppercase);
	printf("Modified string: %s", str);
	return (0);
}
*/