/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:03:01 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/04 14:58:18 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	else
	{
		while (s[i])
		{
			str[i] = s[i];
			i++;
		}
		str[i] = s[i];
		return (str);
	}
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
    char str[] = "Duplicate me";
    printf("Original function: %s\n", strdup(str));
    printf("My function: %s\n", ft_strdup(str));
    return (0);
}
*/
