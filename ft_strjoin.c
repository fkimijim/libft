/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:04:57 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/29 16:22:58 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char	*ans;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	ans = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!ans)
		return (0);
	while (*s1)
		ans[i++] = *s1++;
	while (*s2)
		ans[i++] = *s2++;
	ans[i] = '\0';
	return (ans);
}
