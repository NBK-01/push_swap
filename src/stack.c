/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <nkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:34:31 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/09 16:57:11 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

/* Utility function to print stacks */
void	print_stack(t_list *stack)
{
	while (stack)
	{
		ft_printf("%d->%d\n", stack->index, stack->content);
		stack = stack->next;
	}
}

/* Utility functio to reset index back to OG values after altering a stack
 * used in sort five func only */
void	reset_index(t_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		(stack)->index = i;
		(stack) = stack->next;
		i++;
	}
}

/* Util function to get the index value of the minimum node in the stack
 * used to know the position of the node to be able to move it accordingly */
int	find_min(t_list	**stack)
{
	t_list	*temp;
	int		min;
	int		index;

	temp = (*stack);
	min = INT_MAX;
	while (temp != NULL)
	{
		if (temp->content < min)
		{
			min = temp->content;
			index = temp->index;
		}
		temp = temp->next;
	}
	return (index);
}

// void	bubble_sort(t_list **stack)
// {
// 	int	value;
// 	int	size;
// 	int	i = 0;
// 	t_list	*head = (*stack);

// 	value = INT_MAX;
// 	size = ft_lstsize((head));
// 	while (i < size)
// 	{
// 		if (head->content > head->next->content)
// 		{
// 			value = head->content;
// 			head->content = head->next->content;
// 			head->next->content = value;
// 			i = 0;
// 		}
// 		else
// 		{
// 			head = (head->next);
// 			i++;
// 		}
// 		//ft_printf("%d\n", temp->content);
// 	}
// }

void	bubble_swap(t_list **Node_a, t_list **Node_b)
{
	t_list *temp;

	temp = (*Node_a);
	(*Node_a) = (*Node_b);
	(*Node_b) = temp;
}

/*void bubble_swap(t_list **node1, t_list **node2)
{	
	t_list *temp = *node1;
	*node1 = *node2;
	*node2 = temp;
	
	t_list *temp_next = (*node1)->next;
	(*node1)->next = (*node2)->next;
	(*node2)->next = temp_next;
}*/

// void	bubble_sort(t_list **stack_a)
// {
	
//         t_list *head;
//         t_list *next;

//         head = (*stack_a);
//         next = head->next;

//         while (head != NULL)
// 	{
//     		while (next != NULL)
//     		{
//         		if (head->content > next->content)
//             			bubble_swap(&head, &next);
// 			next = next->next; 
//     		}
//     		head = head->next;
// 	}
// 	ft_printf("%d->", (*stack_a)->next->content);
// }

// Function to perform bubble sort on the linked list
void bubble_sort(t_list **stack_a) {
    t_list *current = *stack_a;
    t_list *next = current->next;
    int swapped;

    // Base case
    if (current == NULL)
        return;

    do {
        swapped = 0;
        current = *stack_a;

        while (current->next != next) {
            if (current->content > current->next->content) {
                bubble_swap(&current, &(current->next));
                swapped = 1;
            }
            current = current->next;
        }
        next = current;
    } while (swapped);

	ft_printf("%d\n", (*stack_a)->next->content);
}
// Function to merge two sorted linked lists
t_list* merge(t_list* left, t_list* right) {
    t_list* result = NULL;

    // Base cases
    if (left == NULL)
        return right;
    else if (right == NULL)
        return left;

    // Recursively merge sorted lists
    if (left->content <= right->content) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }

    return result;
}

// Function to split the linked list into two halves
void split(t_list* source, t_list** front, t_list** back) {
    t_list* slow;
    t_list* fast;

    if (source == NULL || source->next == NULL) {
        *front = source;
        *back = NULL;
        return;
    }

    slow = source;
    fast = source->next;

    // Advance 'fast' by two nodes:, and advance 'slow' by one node
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    // 'slow' is before the midpoint in the 'source' list
    *front = source;
    *back = slow->next;
    slow->next = NULL;
}

// Merge sort function for linked list
void mergeSort(t_list** headRef) {
    t_list* head = *headRef;
    t_list* left;
    t_list* right;

    // Base case: If the list is empty or has one element, return
    if (head == NULL || head->next == NULL) {
        return;
    }

    // Split the list into two halves
    split(head, &left, &right);

    // Recursively sort the two halves
    mergeSort(&left);
    mergeSort(&right);

    // Merge the two sorted halves
    *headRef = merge(left, right);
}

// Function to insert a new node at the beginning of the linked list
void insert(t_list** headRef, int new_content, int new_index) {
    t_list* new_node = (t_list*)malloc(sizeof(t_list));
    new_node->content = new_content;
    new_node->index = new_index;
    new_node->next = *headRef;
    *headRef = new_node;
}
