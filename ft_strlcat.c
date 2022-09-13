/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:47:14 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/13 17:52:38 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_length;
	unsigned int	s_length;

	d_length = ft_strlen(dest);
	s_length = ft_strlen(src);
	i = 0;
	j = 0;
	if (size == 0 || size <= d_length)
		return (s_length + size);
	while (dest[i] != 0)
		i++;
	while (src[j] != 0 && j < size - d_length - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (d_length + s_length);
}
