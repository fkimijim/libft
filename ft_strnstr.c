/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:06:45 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/29 16:55:27 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len_s2;

	len_s2 = ft_strlen(s2);
	if (len_s2 == 0)
		return ((char *)s1);
	if (s1 == NULL && n == 0)
		return (0);
	while (*s1 && n >= len_s2)
	{
		if (ft_strncmp(s1, s2, len_s2) == 0)
			return ((char *)s1);
		s1++;
		n--;
	}
	return (0);
}
