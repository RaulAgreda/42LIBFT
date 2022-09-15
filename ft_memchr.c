/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:18:11 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/15 15:12:05 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ucs;
	size_t			i;

	if (s == 0)
		return (0);
	ucs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ucs[i] == (unsigned char)c)
			return ((void *)(ucs + i));
		i++;
	}
	return (0);
}
