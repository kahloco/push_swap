/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:30:22 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/04 22:15:22 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1) - 1;
	while (len > i && ft_strchr(set, s1[len]))
		len--;
	str = (char *)malloc(sizeof(char) * (len - i + 2));
	if (str == NULL)
		return (NULL);
	while (i <= len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *str = "******Warning******";
    char *set = "*";
	printf("Original string: %s\n", str);
    printf("Trimmed string: %s\n", ft_strtrim(str, set));
    return (0);
}
*/
