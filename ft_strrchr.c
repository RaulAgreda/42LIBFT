/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:10:17 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/13 12:16:22 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s != 0)
	{
		if (*s == c)
			last = s;
		s++;
	}
	if (c == 0)
		return (s);
	return (last);
}
