/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:06:14 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 16:06:15 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned char *)s2;
	while ((*s1_copy || *s2_copy) && n > 0)
	{
		if (*s1_copy != *s2_copy)
			return (*s1_copy - *s2_copy);
		s1_copy++;
		s2_copy++;
		n--;
	}
	return (0);
}
