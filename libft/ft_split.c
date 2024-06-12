/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:26:59 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/05 12:45:24 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;
	int	f;

	count = 0;
	i = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] == c)
			f = 0;
		else if (f == 0)
		{
			f = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*create_word(char const	*str, char c)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_free(char **split, int i)
{
	while (i--)
		free(split[i]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	dest = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (dest == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			dest[i++] = create_word(s, c);
			if (dest[i - 1] == NULL)
				return (ft_free(dest, i));
			while (*s && *s != c)
				s++;
		}
	}
	dest[i] = NULL;
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
    char str[] = "Hello, my name is Chris";
    char **split = ft_split(str, ' ');
	printf("Original string: %s\n", str);
	while (*split)
		printf("Split string: %s\n", *split++);
	while (*split)
		free(*split++);
	return (0);
}
*/