/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:34:31 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/08 14:34:33 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

/* Utility function to print stacks */
void	print_stack(t_list *stack)
{
	while (stack)
	{
		ft_printf("%d->%d\n", stack->index, stack->content);
		stack = stack->next;
	}
}

void	reset_index(t_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		(stack)->index = i;
		(stack) = stack->next;
		i++;
	}
}


int	find_min(t_list	**stack)
{
	t_list	*temp;
	int	min;
	int	index;

	temp = (*stack);
	min = INT_MAX;
	while (temp != NULL)
	{
		if (temp->content < min)
		{
			min = temp->content;
			index = temp->index;
		}
		temp = temp->next;
	}
	return (index);
}

