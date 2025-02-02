/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:21:47 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/09 17:00:06 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

/* Checking for the only 5 cases manually in which three elements can 
 * be unsorted and applying the cmds to each accordingly to get to a 
 * sorted list -- MAX MOVES = 2*/
void	ft_sort_three(t_list **stack)
{
	t_list	*tail;
	t_list	*head;
	t_list	*mid;

	head = *stack;
	mid = head->next;
	tail = ft_lstlast(*stack);
	if ((head->content > mid->content) && (head->content < tail->content))
		swap_a(stack);
	if ((head->content > mid->content) && (mid->content > tail->content))
	{
		swap_a(stack);
		rev_rotate_a(stack);
	}
	if ((head->content > mid->content) && (mid->content < tail->content))
		rotate_a(stack);
	if ((head->content < mid->content) && (head->content < tail->content))
	{
		swap_a(stack);
		rotate_a(stack);
	}
	if ((head->content < mid->content) && (head->content > tail->content))
		rev_rotate_a(stack);
}

/* Getting the index of the minimum value node and moves applying 
 * the cmds needed to push that node to the head of the stack 
 * and push to b for later -> sort for three in a and push head back to a 
 * MAX_MOVES = 6 */
void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	int	min_index;

	min_index = find_min(stack_a);
	//ft_printf("%d\n", min_index);
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
  if (!is_sorted(stack_a))
    ft_sort_three(stack_a);
	push_b_to_a(stack_a, stack_b);
}

/* Same logic as sorting for four but moves min node to top -> push to b
 * resets the index value to be able to sort for four -> push back to a */
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

void	init_sort_large(t_list **stack_a, t_list **stack_b)
{
	int	size;
  t_list  *lst_cpy;

  lst_cpy = ft_lstcpy(stack_a, lst_cpy);
  //print_stack(lst_cpy);
	size = ft_lstsize((*stack_a));
	//set_sorted_index(stack_a);
	//ft_sort_large(stack_a, stack_b, 0, size);
}

void	ft_sort_large(t_list **stack_a, t_list **stack_b, int i, int size)
{
	int	index;

	if (is_sorted(stack_a))
		return ;
	while (index < size)
	{
		if (((*stack_a)->index >> i & 1) == 1)
			rotate_a(stack_a);
		else if (((*stack_a)->index >> i & 1) == 0)
			push_a_to_b(stack_a, stack_b);
	}
	while ((*stack_b))
		push_b_to_a(stack_a, stack_b);
	ft_sort_large(stack_a, stack_b, i + 1, size);
}

