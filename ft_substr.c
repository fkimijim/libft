/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:07:26 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/28 19:27:51 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;

	if (!s)
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) <= start)
		return (ft_calloc(1, sizeof(char)));
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ans = malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (0);
	i = 0;
	if (ft_strlen(s) > start)
	{
		if (len >= ft_strlen(s) - start)
			len = ft_strlen(s) - start;
		s += start;
		while (len > i && *s)
			ans[i++] = *s++;
	}
	ans[i] = '\0';
	return (ans);
}
