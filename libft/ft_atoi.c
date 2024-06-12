/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:18:15 by ckakoz            #+#    #+#             */
/*   Updated: 2024/06/10 08:58:07 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*ptr == 32 || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '+')
		ptr++;
	else if (*ptr == '-')
	{
		sign *= -1;
		ptr++;
	}
	while (*ptr && *ptr >= '0' && *ptr <= '9')
	{
		result *= 10;
		result += *ptr - '0';
		ptr++;
	}
	return (result * sign);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(void)
{
	char string[] = "-54:55";
	printf("String = %s\n", string);
	printf("My function = %d\n", ft_atoi(string));
	printf("Atoi original = %d\n", atoi(string));
	return (0);
}
*/
