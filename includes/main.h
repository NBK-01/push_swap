/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:14:08 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/05 15:33:02 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../lib/lib.h"
# include <limits.h>

// Error checking / parsing
void init_push_swap(char **av, t_list	**a, int  ac);
// int is_valid(char *arg)
int  is_num(char *str);
int  is_dup(char **arg, int nbr, int i);
int  is_sorted(t_list **a);
// Stack stuff
void	init_stack(int nbr, t_list **stack);
void	print_stack(t_list *stack);
void  create_stack(t_list **stack);
void  init_sort(t_list **stack_a);
// Memory allocation -> error messages -> frees

// Sorting


// Operations

#endif
