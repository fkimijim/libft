/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:56:55 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/27 15:56:56 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calc_digits(long int n)
{
	int	digit;

	digit = 1;
	if (n < 0)
	{
		n *= -1;
		digit++;
	}
	while (n > 9)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char		*ans;
	int			digit;
	long int	num;
	size_t		i;

	num = n;
	digit = calc_digits(num);
	ans = malloc(sizeof(char) * (digit + 1));
	if (!ans)
		return (NULL);
	i = digit - 1;
	if (num < 0)
	{
		ans[0] = '-';
		num *= -1;
	}
	while (num > 9)
	{
		ans[i--] = num % 10 + '0';
		num /= 10;
	}
	ans[i] = num + '0';
	ans[digit] = '\0';
	return (ans);
}
