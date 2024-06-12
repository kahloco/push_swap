/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:52:29 by ckakoz            #+#    #+#             */
/*   Updated: 2024/02/21 12:23:36 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;
	char	numb;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		if (ft_putchar('-') < 0)
			return (-1);
		count++;
		nb = -nb;
	}
	if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
		if (count < 0)
			return (-1);
	}
	numb = nb % 10 + '0';
	if (ft_putchar(numb) < 0)
		return (-1);
	return (++count);
}
/*
#include <stdio.h>
int main()
{
	int count = ft_putnbr(165656556);
	printf("\nTotal characters = %d\n", count);
	return (0);
}
*/