/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:00:36 by flhensel          #+#    #+#             */
/*   Updated: 2026/01/19 13:00:24 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_stack_node **stack)
{
	t_stack_node	*head;
	t_stack_node	*next;
	int				tmp_val;
	int				tmp_index;

	if (stack_size(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
	{
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	tmp_val = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp_val;
	next->index = tmp_index;
	return (0);
}

int	sa(t_stack_node **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_stack_node **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (stack_size(*stack_a) < 2 || (stack_size(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}
