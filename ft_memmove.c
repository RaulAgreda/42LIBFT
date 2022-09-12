/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:36:13 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/12 18:59:42 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	if (dst > src)
		memcpy(dst, src, len);
	else
		while(len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	return (dst);
}
