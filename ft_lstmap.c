/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:58:19 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/29 18:40:08 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_copy;
	t_list	*tmp;
	t_list	*content_copy;

	if (!lst || !f || !del)
		return (NULL);
	lst_copy = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		content_copy = ft_lstnew(tmp);
		if (!content_copy)
		{
			del(tmp);
			ft_lstclear(&lst_copy, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_copy, content_copy);
		lst = lst->next;
	}
	return (lst_copy);
}
