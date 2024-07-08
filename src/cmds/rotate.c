/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:20:16 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/08 16:14:19 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/main.h"

void	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	head = (*stack);
	tail = ft_lstlast((head));
	(*stack) = head->next;
	head->next = NULL;
	tail->next = head;
}

void	rotate_a(t_list **stack)
{
	rotate(stack);
	ft_printf("ra\n");
}
