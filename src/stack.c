/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:34:31 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/08 18:51:51 by nkanaan          ###   ########.fr       */
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

/* Utility functio to reset index back to OG values after altering a stack
 * used in sort five func only */
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

/* Util function to get the index value of the minimum node in the stack
 * used to know the position of the node to be able to move it accordingly */
int	find_min(t_list	**stack)
{
	t_list	*temp;
	int		min;
	int		index;

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

void	del(int content)
{
	content -= content;
}

void	bubble_sort(t_list **stack)
{
	t_list	*temp;
	int	value;
	int	size;

	temp = (*stack);
	value = temp->content;
	size = ft_lstsize(temp);
	while (temp)
	{
		if (temp->content > temp->next->content)
		{
			value = temp->content;
			temp->content = temp->next->content;
			temp->next->content = value;
		}
		temp = temp->next;
		ft_printf("%d\n", temp->content);
	}
}
