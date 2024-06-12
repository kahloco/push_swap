/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckakoz <ckakoz@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:39:45 by ckakoz            #+#    #+#             */
/*   Updated: 2023/12/31 18:01:25 by ckakoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	t_list	*temp;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp = f(lst->content);
		new_element = ft_lstnew(temp);
		if (!new_element)
		{
			del(temp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	lst = NULL;
	return (new_list);
}
