/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:48:48 by flhensel          #+#    #+#             */
/*   Updated: 2026/01/19 13:24:41 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack_node **stack_a)
{
	t_stack_node	*head;
	int				first;
	int				second;
	int				third;

	head = *stack_a;
	first = head->value;
	second = head->next->value;
	third = head->next->next->value;
	if (first > second && second < third && first < third)
		sa(stack_a);
	else if (first > second && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first > second && second < third && first > third)
		ra(stack_a);
	else if (first < second && second > third && first < third)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first < second && second > third && first > third)
		rra(stack_a);
}

void	sort_four(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	min_index;

	min_index = find_min_index(stack_a);
	if (min_index == 1)
		sa(stack_a);
	else if (min_index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_index == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

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

int	get_max_bits(int max_index)
{
	int	max_bits;

	max_bits = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	max_index;
	int	max_bits;
	int	i;
	int	j;
	int	size;

	size = stack_size(*stack_a);
	max_index = size - 1;
	max_bits = get_max_bits(max_index);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
