/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:06:00 by flhensel          #+#    #+#             */
/*   Updated: 2026/02/03 13:07:32 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_stack_node **stack)
{
	t_stack_node	*head;
	int				min;
	int				index;
	int				min_index;

	head = *stack;
	min = head->value;
	index = 0;
	min_index = 0;
	while (head)
	{
		if (head->value < min)
		{
			min = head->value;
			min_index = index;
		}
		head = head->next;
		index++;
	}
	return (min_index);
}

static int	find_min_pos(t_stack_node *a)
{
	int	pos;
	int	min;
	int	i;

	min = a->value;
	pos = 0;
	i = 0;
	while (a)
	{
		if (a->value < min)
		{
			min = a->value;
			pos = i;
		}
		a = a->next;
		i++;
	}
	return (pos);
}

void	rotate_to_min(t_stack_node **a)
{
	int	pos;
	int	size;

	pos = find_min_pos(*a);
	size = stack_size(*a);
	if (pos <= size / 2)
	{
		while (pos--)
			ra(a);
	}
	else
	{
		while (pos++ < size)
			rra(a);
	}
}
