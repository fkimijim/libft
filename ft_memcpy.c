/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:49:20 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 19:49:22 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;
	const char		*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (const char *)src;
	if (!dest && !src)
		return (0);
	while (n--)
	{
		*dest_cpy++ = *src_cpy++;
	}
	return (dest);
}
