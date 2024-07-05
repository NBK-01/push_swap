/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:12:21 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/05 15:33:17 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	ft_parse_args(char *av, t_list	**a)
{
	int	i;
	int	nbr;

	i = 1;
	if ((is_valid(av)) == 1)
	{
		(ft_printf("digit error\n"));
		exit(1);
	}
	nbr = ft_atoi(av);
	create_stack(nbr, a);
}

int	is_valid(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

void	ft_free_stack();

void	ft_free_array();

void	ft_free_all();
