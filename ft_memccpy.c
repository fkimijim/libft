/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:48:12 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 19:48:13 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	c_cpy;
	unsigned char	*dest_cpy;
	const char		*src_cpy;

	c_cpy = (unsigned char)c;
	dest_cpy = (unsigned char *)dest;
	src_cpy = (const char *)src;
	while (n--)
	{
		*dest_cpy = *src_cpy;
		if (*src_cpy == c_cpy)
		{
			return (dest_cpy + 1);
		}
		dest_cpy++;
		src_cpy++;
	}
	return (0);
}
