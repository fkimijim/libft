/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:50:07 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 19:50:09 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy;

	cpy = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		cpy[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
