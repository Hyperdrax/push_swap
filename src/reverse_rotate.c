/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:02:58 by flhensel          #+#    #+#             */
/*   Updated: 2026/01/19 12:47:43 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*head;
	t_stack_node	*tail;

	if (stack_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = stack_last(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.

int	rra(t_stack_node **stack_a)
{
	if (reverse_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.

int	rrb(t_stack_node **stack_b)
{
	if (reverse_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

// rrr : rra and rrb at the same time.

int	rrr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if ((stack_size(*stack_a) < 2) || (stack_size(*stack_b) < 2))
		return (-1);
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
