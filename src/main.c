/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:20:49 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/04 10:15:43 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(int ac, char *av[])
{
	int	i;
	long	j;
	t_list	*stack;
	t_list	*current;

	i = 1;
	stack = NULL;
	current = NULL;
	if (ac == 1)
		exit(1);
	if (ac == 2)
		av = ft_split(av[1], ' ');
	while (av[i])
	{
		if ((ft_parse_args(av[i])) == 1)
			return (ft_printf("digit error\n"));
		else
		{
			j = ft_atoi(av[i]);
			if (j < INT_MIN || j > INT_MAX)
				return (ft_printf("max/min error\n"));
		}
		i++;
	}
}
