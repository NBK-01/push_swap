/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:34:31 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/05 15:34:32 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

// Creat Initial stack A


/* Utility fucntion to create an empty stack */
void  create_stack(t_list **stack)
{
  t_list  *new;
  new = NULL;
  ft_lstadd_back(stack, new);
}


/* Utility function to print stacks */
void	print_stack(t_list *stack)
{
	while (stack)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
}


void  print_two_stacks(t_list *stack_a, t_list *stack_b)
{
  ft_printf("STACK A:\n");
  while (stack_a)
  {
    ft_printf("%d\n", stack_a->content);
    stack_a = stack_a->next;
  }

  ft_printf("STACK B:\n");
  while (stack_b)
  {
    ft_printf("%d\n", stack_b->content);
    stack_b = stack_b->next;
  }
}
