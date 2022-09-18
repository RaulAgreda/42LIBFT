/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:18:11 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/18 16:59:33 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ucs;
	size_t			i;

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
