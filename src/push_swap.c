/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:09:18 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/08 20:07:46 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

/* Validates all args, (splits if only one arg) -> filling stack 
 * if args pass all validation and fills stacks with atoi converted args */
void	init_push_swap(char **av, t_list **a, int ac)
{
	int	i;
	int	nbr;

	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		i = 0;
	}
	else
		i = 1;
	while (av[i])
	{
		nbr = ft_atoi(av[i]);
		if (!is_num(av[i]))
			exit(ft_printf("digit error\n"));
		if (!is_dup(av, nbr, i))
			exit(ft_printf("dup error\n"));
		init_stack(nbr, a, i, ac);
		if (ac == 2)
			free(av[i]);
		i++;
	}
	if (ac == 2)
		free(av);
}

/* Filles the stack one by one with the Index I given from the loop 
 * above and the nbr from the atoi coversion. Index is later used to 
 * find the position of maximum or minimum integers in the stack */
void	init_stack(int nbr, t_list **stack, int i, int ac)
{
	t_list	*new;

	if (ac == 2)
		new = ft_lstnew(nbr, i);
	else
		new = ft_lstnew(nbr, i - 1);
	ft_lstadd_back(stack, new);
}

/* Check for size of stack and sorts according to size -> 
 * this leads to more effecient sorting for smaller sizes */
void	init_sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize((*stack_a)) == 2)
		swap_a(stack_a);
	if (ft_lstsize((*stack_a)) == 3)
		ft_sort_three(stack_a);
	if (ft_lstsize((*stack_a)) == 4)
		ft_sort_four(stack_a, stack_b);
	if (ft_lstsize((*stack_a)) == 5)
		ft_sort_five(stack_a, stack_b);
	if (ft_lstsize((*stack_a)) > 5)
		ft_sort_mid(stack_a, stack_b, 0, ft_lstsize((*stack_a)));
}
