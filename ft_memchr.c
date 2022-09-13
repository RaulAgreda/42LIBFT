/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:18:11 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/13 18:10:10 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	sc = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void *)(sc + i));
		i++;
	}
	if (c == 0)
		return ((void *)(sc + i));
	return (0);
}
