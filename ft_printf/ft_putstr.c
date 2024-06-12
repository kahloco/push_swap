/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:06:31 by ckakoz            #+#    #+#             */
/*   Updated: 2024/02/13 14:53:10 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		if (ft_putchar(str[i]) < 0)
			return (-1);
		i++;
	}
	return (i);
}
/*
int main (void)
{
	char str[] = "";
	ft_putstr(str);
	return (0);
}
*/