/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:35:44 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/18 17:39:16 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*iter;
	t_list	*next;

	if (!lst || !del)
		return ;
	iter = *lst;
	while (iter != 0)
	{
		next = iter->next;
		ft_lstdelone(iter, del);
		iter = next;
	}
	*lst = 0;
}
