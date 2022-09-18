/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:33:49 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/18 16:50:22 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	r;
	size_t	i;

	ret = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ret == 0)
		return (0);
	r = 0;
	while (s1[r] != 0)
	{
		ret[r] = ((char *)s1)[r];
		r++;
	}
	i = 0;
	while (s2[i] != 0)
	{
		ret[r] = ((char *)s2)[i];
		i++;
		r++;
	}
	ret[r] = 0;
	return (ret);
}
