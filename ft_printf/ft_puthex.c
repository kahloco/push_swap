/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:16:55 by ckakoz            #+#    #+#             */
/*   Updated: 2024/02/21 12:44:31 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, const char format)
{
	char			*base;
	int				length;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	length = 0;
	if (n >= 16)
		length += ft_puthex(n / 16, format);
	if (length < 0)
		return (-1);
	length += ft_putchar(base[n % 16]);
	return (length);
}

/*
int	ft_hexlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_puthex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, format);
		ft_puthex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd(n - 10 + 'a', 1);
			if (format == 'X')
				ft_putchar_fd(n - 10 + 'A', 1);
		}
	}
}

int	ft_printhex(unsigned int n, const char format)
{
	int	result;

	if (n == 0)
	{
		result = (write(1, "0", 1));
		if (result == -1)
			return (-1);
		else
			return (1);
	}
	else
		ft_puthex(n, format);
	result = ft_hexlen(n);
	if (result == -1)
		return (-1);
	else
		return (result);
}

int main(void)
{
	unsigned int hex = 500;
	ft_printhex(hex, 'X');
	return (0);
}
*/