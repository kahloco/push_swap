/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:39:42 by ckakoz            #+#    #+#             */
/*   Updated: 2024/06/30 19:36:10 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	count_words(char *str, char c)
{
	int		count;
	bool	inside_word;

	count = 0;
	while (*str)
	{
		inside_word = false;
		while (*str == c)
			++str;
		while (*str != c && *str)
		{
			if (!inside_word)
			{
				++count;
				inside_word = true;
			}
			++str;
		}
	}
	return (count);
}

static char	*get_next_word(char *str, char c)
{
	static int	cursor = 0;
	char		*next_word;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[cursor] == c)
		++cursor;
	while ((str[cursor + len] != c) && str[cursor + len])
		++len;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((str[cursor] != c) && str[cursor])
		next_word[i++] = str[cursor++];
	next_word[i] = '\0';
	return (next_word);
}

char	**split(char *str, char c)
{
	int		words_count;
	char	**result;
	int		i;

	i = 0;
	words_count = count_words(str, c);
	if (!words_count)
		exit(1);
	result = malloc(sizeof(char *) * (size_t)(words_count + 2));
	if (!result)
		return (NULL);
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			result[i] = malloc(sizeof(char));
			if (!result[i])
				return (NULL);
			result[i++][0] = '\0';
			continue ;
		}
		result[i++] = get_next_word(str, c);
	}
	result[i] = NULL;
	return (result);
}
