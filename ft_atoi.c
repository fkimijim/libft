/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:55:07 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 15:55:11 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	long_overflow(long long int i, int flag, char c)
{
	if (flag == 1)
	{
		if (LONG_MAX / 10 < i
			|| (LONG_MAX / 10 == i && LONG_MAX % 10 < c - '0'))
			return (1);
	}
	else
	{
		if (LONG_MIN / 10 > i * flag
			|| (LONG_MIN / 10 == i * flag && LONG_MIN % 10 > (c - '0') * flag))
			return (-1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int				flag;
	long long int	ans;

	flag = 1;
	ans = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		flag = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (('0' <= *str && *str <= '9'))
	{
		if (long_overflow(ans, flag, *str) == 1)
			return (-1);
		else if (long_overflow(ans, flag, *str) == -1)
			return (0);
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return ((int)(ans * flag));
}
