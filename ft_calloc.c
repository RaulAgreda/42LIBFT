/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:16:13 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/23 19:00:45 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			mem;
	size_t			i;
	unsigned char	*ret;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (0);
	mem = nmemb * size;
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
