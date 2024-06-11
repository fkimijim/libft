/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:05:59 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 16:06:00 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len_s;
	char			*ans;

	i = 0;
	if (!s || !f)
		return (0);
	len_s = ft_strlen(s);
	ans = malloc(sizeof(char) * (len_s + 1));
	if (!ans)
		return (0);
	while (s[i])
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
