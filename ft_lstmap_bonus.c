/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:17:15 by ragreda-          #+#    #+#             */
/*   Updated: 2022/09/15 14:50:30 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*ret_last;

	if (lst == 0)
		return (0);
	ret = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	if (ret == 0)
	{
		ft_lstclear(&ret, del);
		return (0);
	}
	ret_last = ret;
	while (lst != 0)
	{
		ret_last->next = ft_lstnew((*f)(lst->content));
		if (ret_last->next == 0)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		ret_last = ret_last->next;
		lst = lst->next;
	}
	return (ret);
}
