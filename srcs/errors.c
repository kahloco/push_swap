/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:41:27 by ckakoz            #+#    #+#             */
/*   Updated: 2024/06/30 19:36:35 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	syntax_errors(char *input)
{
	if (!(*input == '+' || *input == '-'
			|| (*input >= '0' && *input <= '9')))
		return (1);
	if ((*input == '+' || *input == '-')
		&& !(input[1] >= '0' && input[1] <= '9'))
		return (1);
	while (*++input)
	{
		if (!(*input >= '0' && *input <= '9'))
			return (1);
	}
	return (0);
}

int	duplicate_errors(t_stack_node *a, int num)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->nbr == num)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*temp;
	t_stack_node	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		temp = current->next;
		current->nbr = 0;
		free(current);
		current = temp;
	}
	*stack = NULL;
}

void	free_errors(t_stack_node **a)
{
	free_stack(a);
	write(1, "Error\n", 6);
	exit(1);
}
