/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:18:59 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/08 16:13:04 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/main.h"

/* Pushes the first node of a stack to another stack -> swaps the 
 * head->next of the src stack to head and assigns the values of 
 * head and head->next of the dest stack */
void	push(t_list **src, t_list **dest)
{
	t_list	*head_src;
	t_list	*temp;
	t_list	*head_dest;

	head_src = (*src);
	head_dest = (*dest);
	temp = head_src;
	head_src = head_src->next;
	(*src) = head_src;
	if (head_dest == NULL)
	{
		head_dest = temp;
		head_dest->next = NULL;
		(*dest) = head_dest;
	}
	else
	{
		temp->next = head_dest;
		(*dest) = temp;
	}
}

/* Pushes first node of Stack A to Stack B */
void	push_a_to_b(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}

/* Pushes first node of Stack B to Stack A */
void	push_b_to_a(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}
