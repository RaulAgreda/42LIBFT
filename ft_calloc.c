/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:16:13 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/14 00:24:47 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			mem;
	size_t			i;
	unsigned char	*ret;

	mem = nmemb * size;
	if (nmemb > 2147483647 || size > 2147483647 || mem > 2147483647)
		return (0);
	ret = malloc(nmemb * size);
	if (ret == 0)
		return (0);
	i = 0;
	while (i < mem)
	{
		ret[i] = 0;
		i++;
	}
	return ((void *)ret);
}
