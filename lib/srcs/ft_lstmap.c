/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:25:33 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/02 14:05:20 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*new;
	t_list	*res;

	res = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			ft_lstdelone(new, del);
		else
			ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
