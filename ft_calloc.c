/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:55:35 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 15:55:37 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ans;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ans = malloc(count * size);
	if (ans == NULL)
		return (ans);
	ft_bzero(ans, size * count);
	return (ans);
}
