/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:14:08 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/05 13:59:29 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../lib/lib.h"
# include <limits.h>

// Error checking / parsing
void	ft_parse_args(char *av, t_list *stack);
int	is_valid(char *str);
// int	is_dup(char *str);

// Stack stuff
void	create_stack(int nbr, t_list **stack);
void	print_stack(t_list *stack);

// Memory allocation -> error messages -> frees

// Sorting


// Operations

#endif
