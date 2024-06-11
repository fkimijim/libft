/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:48:47 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 19:48:48 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_cpy;
	const unsigned char	*s2_cpy;

	s1_cpy = (const unsigned char *)s1;
	s2_cpy = (const unsigned char *)s2;
	while (n--)
	{
		if (*s1_cpy != *s2_cpy)
			return (*s1_cpy - *s2_cpy);
		s1_cpy++;
		s2_cpy++;
	}
	return (0);
}
