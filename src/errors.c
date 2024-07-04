/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:12:21 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/04 09:28:39 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	ft_parse_args(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' && (!(str[1] >= '0' && str[1] <= '9')))
		return (1);

	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
} 

/* Full frees for array, stack, etc.. */

void	ft_free_stack();

void	ft_free_array();

void	ft_free_all();
