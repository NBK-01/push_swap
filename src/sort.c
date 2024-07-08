/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:21:47 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/08 14:49:51 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	ft_sort_three(t_list **stack)
{
  t_list  *tail;
  t_list  *head;
  t_list  *mid;

  head = *stack;
  mid = head->next;
  tail = ft_lstlast(*stack);
  if ((head->content > mid->content) && (head->content < tail->content))
    swap_a(stack);
  else if ((head->content > mid->content) && (mid->content > tail->content))
  {
    swap_a(stack);
    rev_rotate_a(stack);
  }
  else if ((head->content > mid->content) && (mid->content < tail->content))
    rotate_a(stack);
  else if ((head->content < mid->content) && (head->content < tail->content))
  {
    swap_a(stack);
    rotate_a(stack);
  }
  else if ((head->content < mid->content) && (head->content > tail->content))
    rev_rotate_a(stack);
}

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	int	min_index;
	
	min_index = find_min(stack_a);
	if (min_index == 1)
		swap_a(stack_a);
	if (min_index == 2)
	{
		rotate_a(stack_a);
		swap_a(stack_a);
	}
	if (min_index == 3)
		rev_rotate_a(stack_a);
	push_a_to_b(stack_a, stack_b);
	ft_sort_three(stack_a);
	push_b_to_a(stack_a, stack_b);
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int	min_index;

	min_index = find_min(stack_a);
	if (min_index == 1)
		swap_a(stack_a);
	if (min_index == 2)
	{
		rotate_a(stack_a);
		swap_a(stack_a);
	}
	if (min_index == 3)
	{
		rev_rotate_a(stack_a);
		rev_rotate_a(stack_a);
	}
	if (min_index == 4)
		rev_rotate_a(stack_a);
	push_a_to_b(stack_a, stack_b);
	reset_index((*stack_a));
	ft_sort_four(stack_a, stack_b);
	push_b_to_a(stack_a, stack_b);
}

