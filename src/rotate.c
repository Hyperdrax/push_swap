/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:01:43 by flhensel          #+#    #+#             */
/*   Updated: 2026/01/19 12:48:39 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_stack_node **stack)
{
	t_stack_node	*head;
	t_stack_node	*tail;

	if (stack_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = stack_last(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.

int	ra(t_stack_node **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.

int	rb(t_stack_node **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

// rr : ra and rb at the same time.

int	rr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if ((stack_size(*stack_a) < 2) || (stack_size(*stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}
