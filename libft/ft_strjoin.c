/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:09:45 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/04 15:13:42 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i;
	int		j;

	i = 0;
	j = 0;
	joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
	if (joined == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		joined[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		joined[j] = s2[i];
		i++;
		j++;
	}
	joined[j] = '\0';
	return (joined);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[] = "hello ";
    char s2[] = "how are ya!";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
    printf("Joined string: %s\n", ft_strjoin(s1, s2));
    return (0);
}
*/
