/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkimijim <fkimijim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:04:04 by fkimijim          #+#    #+#             */
/*   Updated: 2024/04/29 16:24:00 by fkimijim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calc_words(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

int	calc_word_len(char const *s, char c)
{
	int	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}

void	free_mem(int i, char **ans)
{
	while (i-- > 0)
		free(ans[i]);
	free(ans);
}

char	**make_ans(char const *s, char c, int n_splits, char **ans)
{
	int	i;
	int	j;
	int	k;
	int	word_len;

	i = 0;
	j = 0;
	while (j < n_splits)
	{
		while (s[i] && s[i] == c)
			i++;
		word_len = calc_word_len(&s[i], c);
		ans[j] = malloc(sizeof(char) * (word_len + 1));
		if (!ans[j])
		{
			free_mem(j, ans);
			return (0);
		}
		k = -1;
		while (++k < word_len)
			ans[j][k] = s[i + k];
		ans[j++][word_len] = '\0';
		i += word_len;
	}
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		n_splits;

	if (s == NULL)
		return (NULL);
	n_splits = calc_words(s, c);
	ans = malloc(sizeof(char *) * (n_splits + 1));
	if (!ans)
		return (0);
	ans = make_ans(s, c, n_splits, ans);
	if (!ans)
		return (0);
	ans[n_splits] = 0;
	return (ans);
}
