/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:57:43 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/29 18:36:17 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_copy;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		lst_copy = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lst_copy;
	}
}
