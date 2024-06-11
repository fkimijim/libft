/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:05:22 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/29 18:57:10 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = 0;
	len_src = ft_strlen(src);
	i = 0;
	if (!dest && size == 0)
		return (len_src);
	while (dest[len_dest] != '\0' && len_dest < size)
		len_dest++;
	if (size == 0)
		return (len_src);
	if (size <= len_dest)
		return (len_src + len_dest);
	while (i < size - len_dest - 1 && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
