/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:20:49 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/02 18:12:51 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void test_func(t_list **lst, int new_data)
{
	t_list *new_node = (t_list *)malloc(sizeof(t_list));
	
	if (new_node == NULL) 
		exit(1);
    	new_node->content = new_data;
    	new_node->next = NULL;

	ft_lstadd_back(lst, new_node);
}

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
		if ((ft_parse_args(av[i])))
			return (ft_printf("digit error\n"));
		else
		{
			j = ft_atoi(av[i]);
			if (j < INT_MIN || j > INT_MAX)
				return (ft_printf("max/min error\n"));
			else
                		test_func(&stack, (int)j);
		}
		i++;
	}
	current = stack;
    	while (current) 
	{
        	ft_printf("%d\n", current->content);
        	current = current->next;
    	}
}
