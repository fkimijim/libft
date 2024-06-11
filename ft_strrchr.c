/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:06:58 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 16:07:00 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ans;

	ans = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ans = s;
		s++;
	}
	if (*s == (char)c)
		ans = s;
	return ((char *)ans);
}
