/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:14:08 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/08 18:49:16 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../lib/lib.h"
# include <limits.h>

// Error checking / parsing
void	init_push_swap(char **av, t_list **a, int ac);
int		is_num(char *str);
int		is_dup(char **arg, int nbr, int i);
int		is_sorted(t_list **a);
/* Stack utils */
void	init_stack(int nbr, t_list **stack, int i, int ac);
void	print_stack(t_list *stack);
void	init_sort(t_list **stack_a, t_list **stack_b);
void	reset_index(t_list *stack);
int		find_min(t_list **stack);
void	del(int content);
/* Sorting */
void	ft_sort_three(t_list **stack);
void	ft_sort_four(t_list **stack_a, t_list **stack_b);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
void	ft_sort_mid(t_list **stack_a, t_list **stack_b, int bit_pos, int size);
//void	ft_sort_mid(t_list **stack_a, t_list **stack_b);
void	bubble_sort(t_list **stack);
/*Operations*/
void	swap(t_list **stack);
void	swap_a(t_list **stack);
void	swap_b(t_list **stack);
void	rotate(t_list **stack);
void	rotate_a(t_list **stack);
void	rev_rotate(t_list **stack);
void	rev_rotate_a(t_list **stack);
void	push(t_list **src, t_list **dest);
void	push_a_to_b(t_list **stack_a, t_list **stack_b);
void	push_b_to_a(t_list **stack_a, t_list **stack_b);
#endif
