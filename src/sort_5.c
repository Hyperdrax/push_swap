/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:11:31 by flhensel          #+#    #+#             */
/*   Updated: 2026/01/19 15:19:37 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	min_pos(t_stack_node *a)
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

static void	push_min_to_b(t_stack_node **a, t_stack_node **b)
{
	int	pos;
	int	len;
	int	i;

	pos = min_pos(*a);
	len = stack_size(*a);
	if (pos <= len / 2)
	{
		i = 0;
		while (i++ < pos)
			ra(a);
	}
	else
	{
		i = 0;
		while (i++ < len - pos)
			rra(a);
	}
	pb(a, b);
}

void	sort_five(t_stack_node **a, t_stack_node **b)
{
	push_min_to_b(a, b);
	push_min_to_b(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
