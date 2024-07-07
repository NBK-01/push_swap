/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:53:12 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/05 16:29:41 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/main.h"

void  rev_rotate(t_list **stack)
{
  t_list  *head;
  t_list  *tail;

  head = (*stack);
  tail = ft_lstlast((head));

  while (head != NULL)
  {
    if (head->next->next == NULL)
    {
      head->next = NULL;
      break ;
    }
    head = head->next;
  }
  tail->next = (*stack);
  (*stack) = tail;
}

void  rev_rotate_a(t_list **stack)
{
  rev_rotate(stack);
  ft_printf("rra\n");
}


