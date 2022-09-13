/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:42:03 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/13 11:46:26 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	length;
	size_t	i;

	length = 0;
	while (src[length] != 0)
		length++;
	i = 0;
	while (i < length + 1 && i < size)
	{
		if (i == size - 1)
			dest[i] = 0;
		else
			dest[i] = src[i];
		i++;
	}
	return (length);
}
