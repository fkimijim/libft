/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:16:01 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 16:16:03 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*cpy;

	i = 0;
	cpy = (unsigned char *)str;
	while (i < n)
	{
		cpy[i] = '\0';
		i++;
	}
}
