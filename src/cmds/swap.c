/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:19:21 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/05 16:30:08 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/main.h"


void  swap(t_list **stack)
{
  int value;
  t_list  *temp;
  t_list  *next;

  temp = (*stack);
  next = temp->next;
  value = temp->content;
  temp->content = next->content;
  next->content = value;
}

void  swap_a(t_list **stack)
{
  swap(stack);
  ft_printf("sa\n");
}

void  swap_b(t_list **stack)
{
  swap(stack);
  ft_printf("sb\n");
}

void  swap_both(t_list **stack_a, t_list **stack_b)
{
  swap_a(stack_a);
  swap_b(stack_b);
  ft_printf("ss\n");
}
