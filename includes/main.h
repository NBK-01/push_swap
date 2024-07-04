/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:14:08 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/04 10:00:42 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../lib/lib.h"
# include <limits.h>

typedef struct	s_node
{
  int k_sort;
  int nbr;
  struct  s_node *next;
}	t_node;

typedef struct	s_stack
{
	t_node	*head;
	t_node	*tail;
}	t_stack;


// Error checking
int	ft_parse_args(char *str);


#endif
