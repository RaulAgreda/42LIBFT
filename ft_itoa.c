/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:42:16 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/18 17:47:28 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	n_digits(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		count ++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		neg;

	neg = n < 0;
	ret = malloc(sizeof (char) * (n_digits(n) + 1 + neg));
	if (ret == 0)
		return (0);
	ret[n_digits(n) + neg] = 0;
	i = n_digits(n) - 1 + neg;
	while (i >= 0 + neg)
	{
		if (n % 10 >= 0)
			ret[i] = n % 10 + '0';
		else
			ret[i] = -(n % 10) + '0';
		n /= 10;
		i--;
	}
	if (neg)
		ret[i] = '-';
	return (ret);
}
