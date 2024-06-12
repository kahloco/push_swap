/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:07:20 by ckakoz            #+#    #+#             */
/*   Updated: 2024/02/21 12:33:47 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int		count;
	char	numb;

	count = 0;
	if (n > 9)
	{
		count += ft_putunsigned(n / 10);
		if (count < 0)
			return (-1);
	}
	numb = n % 10 + '0';
	if (ft_putchar(numb) < 0)
		return (-1);
	return (++count);
}
/*
int main (void)
{
	int i = ft_putunsigned(33232);
	ft_printf("\nNumber of characters = %i\n", i);
	return (0);
}
*/