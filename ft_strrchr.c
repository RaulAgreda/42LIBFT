/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:10:17 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/15 15:20:04 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	*str;

	if (s == 0)
		return (0);
	str = (char *)s;
	last = 0;
	while (*str != 0)
	{
		if (*str == (unsigned char)c)
			last = str;
		str++;
	}
	if (c == 0)
		return (str);
	return (last);
}
