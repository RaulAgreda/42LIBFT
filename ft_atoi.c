/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:00:05 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/13 19:22:58 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ignore_spaces(const char *s)
{
	while (*s == ' ' || *s == '\v' || *s == '\t'
		|| *s == '\r' || *s == '\n' || *s == '\f')
		s++;
	return (s);
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	n;

	str = ignore_spaces(str);
	neg = *str == '-';
	if (neg)
		str++;
	else if (*str == '+')
		str++;
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	if (neg)
		return (-n);
	return (n);
}
