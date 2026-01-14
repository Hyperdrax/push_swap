/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:01:16 by flhensel          #+#    #+#             */
/*   Updated: 2025/12/03 13:01:26 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push (t_stack_node **stack_to, **stack_from)
{
	t_stack_node	*tmp;
	t_stack_node	*head_to;
	t_stack_node	*head_from;

	if (ft_lstsize(*stack_from) == 0)
		return (-1);
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.

int pa (t_stack_node **stack_a, t_stack_node **stack_b)
{
	if(push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return(0);
}

// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.

int pb (t_stack_node **stack_a, t_stack_node **stack_b)
{
	if(push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return(0);
}
