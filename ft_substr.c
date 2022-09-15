/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:28:00 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/15 16:31:13 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (s == 0)
		return (0);
	if (len == 0 || (size_t)start >= ft_strlen(s))
	{
		ret = malloc(sizeof(char));
		if (ret == 0)
			return (0);
		*ret = 0;
		return (ret);
	}
	if (ft_strlen(s) - (int)start < len)
		ret = malloc(sizeof(char) * (ft_strlen(s) - (int)start + 1));
	else
		ret = malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (0);
	ft_strlcpy(ret, (char *)s + start, len + 1);
	return (ret);
}
