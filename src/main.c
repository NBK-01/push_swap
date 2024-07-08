/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:20:49 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/08 14:00:15 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	del(int content)
{
	content -= content;
}
/* Init empty stack and send all arguments to validate then initialize 
 * stack then check if stack is sorted (if not -> start sorting) */

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit (1);
	init_push_swap(av, &stack_a, ac);
	if (!is_sorted(&stack_a))
		exit(1);
	else
		init_sort(&stack_a, &stack_b);
	print_stack((stack_a));
	ft_lstclear(&stack_a, del);
}
