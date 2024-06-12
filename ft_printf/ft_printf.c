/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:04 by ckakoz            #+#    #+#             */
/*   Updated: 2024/02/21 12:59:12 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		length += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		length += ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		length += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		length += ft_putunsigned(va_arg(args, unsigned int));
	else if (format == 'X' || format == 'x')
		length += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		length += ft_putchar('%');
	else
		return (-1);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		length;
	int		ret;

	length = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			ret = ft_format(args, *(++str));
			if (ret < 0)
				return (-1);
			length += ret;
		}
		else
		{
			if (write(1, str, 1) < 0)
				return (-1);
			length++;
		}
		str++;
	}
	va_end(args);
	return (length);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "I am a string";
	int ptr = 100;
	int hexa = 1202102;

	ft_printf("Hello I am %d years old\n", 35);
	ft_printf("Pointer = %p\n");
	ft_printf("Hexadecimal = %x\n");
	ft_printf("String = %s\n", str);
	return(0);
}
*/