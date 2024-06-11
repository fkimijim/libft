/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:47:47 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 19:47:51 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*str_cpy;
	unsigned char		c_cpy;

	str_cpy = (const unsigned char *)str;
	c_cpy = (unsigned char)c;
	while (n--)
	{
		if (*str_cpy == c_cpy)
			return ((void *)str_cpy);
		str_cpy++;
	}
	return (0);
}
