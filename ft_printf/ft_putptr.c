/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:11:19 by ckakoz            #+#    #+#             */
/*   Updated: 2024/02/13 14:50:18 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(uintptr_t n)
{
	int		length;
	char	*base;

	base = "0123456789abcdef";
	length = 0;
	if (n >= 16)
		length = ft_put_ptr(n / 16);
	if (length < 0)
		return (-1);
	if (ft_putchar(base[n % 16]) < 0)
		return (-1);
	length++;
	return (length);
}

int	ft_printptr(uintptr_t ptr)
{
	int	length;

	length = 0;
	if (write(1, "0x", 2) < 0)
		return (-1);
	if (ptr == 0)
	{
		write(1, "0", 1);
		return (3);
	}
	else
		length = ft_put_ptr(ptr);
	return (length + 2);
}
/*
#include <stdio.h>

int main()
{
	int count = ft_printptr(165656556);
	printf("\nTotal characters = %d\n", count);
	return (0);
}
*/