/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:08:07 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/12 18:58:15 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	    ft_isalpha(int c);
int	    ft_isdigit(int c);
int	    ft_isalnum(int c);
int	    ft_isascii(int c);
int	    ft_isprint(int c);
void	*memcpy(void *dst, const void *src, size_t n);
#endif