/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:57:02 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/18 17:32:40 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	n_words(char const *s, char c)
{
	int	n;
	int	word;
	int	i;

	i = 0;
	n = 0;
	word = (*s != c && *s != 0);
	n = word;
	while (s[i] != 0)
	{
		if (!word && s[i] != c)
			n++;
		word = s[i] != c;
		i++;
	}
	return (n);
}

int	count_word(char const *s, char c, int *i)
{
	int	count;
	int	j;

	count = 0;
	while (s[*i] == c)
		(*i)++;
	j = *i;
	while (s[j] != c && s[j] != 0)
	{
		count++;
		j++;
	}
	return (count);
}

void	*save_malloc(char ***ret, size_t size, size_t elems)
{
	*ret = malloc(size * elems);
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		w;
	int		w_count;
	char	**ret;

	if (!s ||!save_malloc(&ret, sizeof(char *), n_words(s, c) + 1) || !ret)
		return (0);
	ret[n_words(s, c)] = 0;
	i = 0;
	w = 0;
	while (w < n_words(s, c))
	{
		w_count = count_word(s, c, &i);
		ret[w] = malloc(sizeof(char) * (w_count + 1));
		k = 0;
		while (k < w_count)
		{
			ret[w][k] = s[i++];
			k++;
		}
		ret[w][k] = 0;
		w++;
	}
	return (ret);
}
