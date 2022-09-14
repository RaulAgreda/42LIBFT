/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:02:22 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/14 16:40:52 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	last;
	size_t	len;
	char	*ret;

	len = ft_strlen(s1);
	i = 0;
	while (i < len && ft_strchr(set, s1[i]))
		i++;
	last = len - 1;
	while (last >= 0 && ft_strchr(set, s1[last]))
		if (last > 0)
			last--;
	else
		break ;
	if (last > i)
		return (ft_substr(s1, i, last - i + 1));
	ret = malloc(sizeof(char));
	*ret = 0;
	return (ret);
}
/*
int	main(int argc, char **argv)
{
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
}*/
