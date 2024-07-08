/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:19:21 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/08 16:08:09 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/main.h"

/* Swaps head and head->next */
void	swap(t_list **stack)
{
	int		value;
	t_list	*temp;
	t_list	*next;

	temp = (*stack);
	next = temp->next;
	value = temp->content;
	temp->content = next->content;
	next->content = value;
}

/* Swaps first two elements in stack A */
void	swap_a(t_list **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

/* Swaps first two elements in stack B */
void	swap_b(t_list **stack)
{
	swap(stack);
	ft_printf("sb\n");
}

/* Swaps first two elements in both stacks */
void	swap_both(t_list **stack_a, t_list **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	ft_printf("ss\n");
}
