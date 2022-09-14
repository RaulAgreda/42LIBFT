/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:57:02 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/14 17:50:09 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	count_word(char const *s, char c, int	*i)
{
	int	count;
	int	j;

	count = 0;
	while (s[*i] == c)
		(*i)++;
	j = i;
	while (s[j] != c && s[j] != 0)
	{
		count++;
		j++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		w;
	char	**ret;

	w = n_words(s, c);
	ret = malloc(sizeof(char *) * (w + 1));
	ret[w] = 0:
	i = 0;
	w = 0;
	while (w < n_words(s, c))
	{

		w++;
	}
}
int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	for (int i = 0; i < n_words(argv[1], argv[2][0]); i++)
		printf("%d\n", count_word(argv[1], argv[2][0], &j));
}
