/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:28:00 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/14 10:32:41 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	ret = malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (0);
	ft_strlcpy(ret, (char *)s + start, len + 1);
	return (ret);
}
