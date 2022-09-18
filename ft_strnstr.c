/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:54:48 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/18 17:11:18 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		findlen;
	char	*str;
	char	*to_find;
	size_t	i;

	if (haystack == 0 && len == 0)
		return (0);
	str = (char *)haystack;
	to_find = (char *)needle;
	if (*to_find == 0)
		return (str);
	findlen = ft_strlen(to_find);
	i = 0;
	while (str[i] != 0 && i + findlen <= len)
	{
		if (str[i] == to_find[0])
			if (ft_strncmp(str + i, to_find, findlen) == 0)
				return (str + i);
		i++;
	}
	return (0);
}
