/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:04:27 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 16:04:29 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_copy;

	s1_copy = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s1_copy)
		return (0);
	ft_strlcpy(s1_copy, s1, (ft_strlen(s1) + 1));
	return (s1_copy);
}
