/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:02:44 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/07 13:04:19 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>

int main(void)
{
    int data = 42;
    t_list *node = ft_lstnew(&data);

    if (node != NULL)
    {
        printf("Node created. Data = %d\n", *(int *)node->content);
        free(node);
    }
    else
        printf("Failed to create node.\n");
    return (0);
}
*/