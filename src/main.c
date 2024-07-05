/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:20:49 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/05 15:33:25 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(int ac, char *av[])
{
	int	i;
	long	j;
	t_list	*stack_a;

	/* temporary dirty fix -- for string || multi arg input */
	if (ac == 2)
		i = 0;
	else
		i = 1;
	stack_a = NULL;
	if (ac == 1)
		exit(1);
	if (ac == 2)
		av = ft_split(av[1], ' ');
	while (av[i])
	{
		ft_parse_args(av[i], &stack_a);
		i++;
	}
	print_stack(stack_a);
}
