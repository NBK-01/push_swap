/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:34:31 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/05 14:00:16 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	create_stack(int nbr, t_list **stack)
{
	t_list	*new;
	
	new = ft_lstnew(nbr);
	ft_lstadd_back(stack, new);

	print_stack((*stack));	
}

void	print_stack(t_list *stack)
{
	while (stack)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
}
