/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:00:36 by flhensel          #+#    #+#             */
/*   Updated: 2025/12/03 13:00:48 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int swap (t_stack_node **stack)
{
	t_stack_node *head;
	t_stack_node *next;
	int tmp_val;
	int tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
	{
		ft_putendl_fd("Error")
		exit(0)
	}
	tmp_val = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp_val;
	next->index = tmp_index;
	return (0);
}

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one element or none.

int sa (t_stack_node **stack_a)
{
	if (swap(stack_a) == -1)
		return(-1);
	ft_putendl_fd("sa",1);
	return(0);
}

// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one element or none.

int sb (t_stack_node **stack_b)
{
	if (swap(stack_b) == -1)
		return(-1);
	ft_putendl_fd("sb",1);
	return(0);
}

// ss : sa and sb at the same time.

int ss (t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || (ft_lstsize(*stack_b) < 2))
		return(-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss",1);
	return(0);
}
