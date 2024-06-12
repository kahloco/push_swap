/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:08:08 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/05 14:09:08 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
char uppercase(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper((unsigned char)c);
    else
        return ft_tolower((unsigned char)c);
}

int main(void)
{
    char  *str = "Hello my name is Chris";
    char *result = ft_strmapi(str, uppercase);
    printf("Original - %s\n", str);
    printf("Mapped - %s\n", result);
	free(result);
   return 0;
}
*/
