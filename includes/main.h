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
void  print_two_stacks(t_list  *stack_a, t_list *stack_b);
void  create_stack(t_list **stack);
void  init_sort(t_list **stack_a, t_list **stack_b);
// Memory allocation -> error messages -> frees

// Sorting
void  ft_sort_three(t_list **stack);
void  ft_sort_mid(t_list **stack_a, t_list **stack_b);

// Operations
void  swap(t_list **stack);
void  swap_a(t_list **stack);
void  swap_b(t_list **stack);
void  rotate(t_list **stack);
void  rotate_a(t_list **stack);
void  rev_rotate(t_list **stack);
void  rev_rotate_a(t_list **stack);
void  push(t_list **src, t_list **dest);
void  push_a_to_b(t_list **stack_a, t_list **stack_b);
void  push_b_to_a(t_list **stack_a, t_list **stack_b);
#endif
