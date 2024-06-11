/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:07:11 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 16:07:12 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_head;
	char	*s1_tail;
	char	*ans;
	size_t	len;

	if (!s1 || !set)
		return (0);
	s1_head = (char *)s1;
	while (*s1_head && find_set(*s1_head, set))
		s1_head++;
	s1_tail = (char *)s1 + ft_strlen(s1) - 1;
	while (s1_tail > s1_head && find_set(*s1_tail, set))
		s1_tail--;
	len = s1_tail - s1_head + 1;
	ans = ft_substr(s1_head, 0, len);
	return (ans);
}
