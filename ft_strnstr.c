/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:54:48 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/13 18:21:07 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int		findlen;
	char	*str;
	char	*to_find;
	size_t	i;

	str = (char *)haystack;
	to_find = (char *)needle;
	if (*to_find == 0)
		return (str);
	findlen = ft_strlen(to_find);
	i = 0;
	while (str[i] != 0 && i < len)
	{
		if (str[i] == to_find[0])
			if (ft_strncmp(str + i, to_find, findlen) == 0)
				return (str + i);
		i++;
	}
	return (0);
}
