/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:21:47 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/04 09:34:25 by nkanaan          ###   ########.fr       */
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


void	ft_med_sort();


void	ft_sort();
