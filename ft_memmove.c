/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:49:43 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 19:49:44 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	if (!n || dest == src)
		return (dest);
	if (dest <= src)
	{
		while (n--)
			*dest_cpy++ = *src_cpy++;
	}
	else
	{
		dest_cpy += n;
		src_cpy += n;
		while (n--)
			*--dest_cpy = *--src_cpy;
	}
	return (dest);
}
