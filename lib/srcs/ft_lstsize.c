/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:25:00 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/02 13:13:59 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	len;
  t_list  *temp;

  temp = lst;
	len = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
  free(temp);
	return (len);
}
