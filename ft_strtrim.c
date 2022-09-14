/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:02:22 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/14 14:09:10 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	last;

	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	last = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[last]))
		last--;
	return (ft_substr(s1, i, last - i + 1));
}
