#include "../lib.h"

t_list  *ft_lstcpy(t_list **stack, t_list *dest)
{
  t_list  *temp;

  temp = (*stack);
  while (temp)
  {
    dest->content = temp->content;
    temp = temp->next;
  }
  ft_printf("%d\n%d\n", dest->content, dest->next->content);
  return (dest);
}
