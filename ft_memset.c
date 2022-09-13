/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:39:21 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/13 18:12:06 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uc;
	size_t			i;

	i = 0;
	uc = (unsigned char *)b;
	while (i < len)
	{
		uc[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
