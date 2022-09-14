/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:09:27 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/14 10:11:27 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*sdup;

	i = 0;
	if (src == 0)
		return (0);
	while (src[i] != 0)
			i++;
	sdup = (char *)malloc(sizeof(char) * (i + 1));
	if (sdup == 0)
		return (0);
	i = 0;
	while (src[i] != 0)
	{
			sdup[i] = src[i];
			i++;
	}
	sdup[i] = 0;
	return (sdup);
}
