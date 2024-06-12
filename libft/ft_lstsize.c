/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:13:24 by ckakoz            #+#    #+#             */
/*   Updated: 2024/01/07 13:02:40 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
    t_list *node1 = ft_lstnew("Blah");
	t_list *node2 = ft_lstnew("Blah");
    t_list *node3 = ft_lstnew("Blah");
    t_list *list = node1;
    node1->next = node2;
    node2->next = node3;
    int size = ft_lstsize(list);
    printf("Size of list: %d\n", size); 
	return (0);
}
*/