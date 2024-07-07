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

/* Check is syntax is valid and meets reqs during validation */
int	is_num(char *str)
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

/* Check for duplicates during validation */
int is_dup(char **arg, int nbr, int i)
{
  i++; 
  while (arg[i])
	{
		if (ft_atoi(arg[i]) == nbr)
			return (1);
		i++;
	}
	return (0);
}

/* Check if stack a is sorted using temp value */
int is_sorted(t_list **a)
{
  t_list  *temp;

  temp = (*a);
  while (temp && temp->next)
  {
    // ft_printf("TEMP: %d", temp->content);
    if (temp->content > temp->next->content)
      return (1);
    temp = temp->next;
  }
  return (0);
}
