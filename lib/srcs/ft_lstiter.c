/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:24:10 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/02 14:03:46 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib.h"

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	while (lst)
	{
		tmp = lst->next;
		f(lst->content);
		lst = tmp;
	}
}
