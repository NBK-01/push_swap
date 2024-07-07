
#include "../includes/main.h"

void  init_push_swap(char **av, t_list	**a, int  ac)
{
	int	i;
	int	nbr;

  if (ac == 2)
  {
    av = ft_split(av[1], ' ');
    i = 0;
  }
  else
    i = 1;
  while (av[i])
  {
	  nbr = ft_atoi(av[i]);
	  if (is_num(av[i]) == 1)
		  exit(ft_printf("digit error\n"));
    if (is_dup(av, nbr, i) == 1)
       exit(ft_printf("dup error\n"));
	  init_stack(nbr, a);
    i++;
  }
}

void	init_stack(int nbr, t_list **stack)
{
	t_list	*new;

	new = ft_lstnew(nbr);
	ft_lstadd_back(stack, new);
}


void  init_sort(t_list **stack_a, t_list **stack_b)
{
  if (ft_lstsize((*stack_a)) == 2)
    swap_a(stack_a);
  if (ft_lstsize((*stack_a)) == 3)
    ft_sort_three(stack_a);
  if (ft_lstsize((*stack_a)) == 5)
    ft_sort_mid(stack_a, stack_b);
    // Push 2 to b and sort for three then push back to a
}

