/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 10:22:59 by flhensel          #+#    #+#             */
/*   Updated: 2025/12/08 10:39:36 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack_node	*get_next_min(t_stack_node **stack)
{
    t_stack_node	*current;
    t_stack_node	*min;
    int				has_min;

    min = NULL;
    has_min = 0;
    current = *stack;
    while (current)
    {
        if ((current->index == -1) && (!has_min || current->value < min->value))
        {
            min = current;
            has_min = 1;
        }
        current = current->next;
    }
    return (min);
}

void	index_stack(t_stack_node **stack)
{
    t_stack_node	*min_node;
    int				index;

    index = 0;
    min_node = get_next_min(stack);
    while (min_node)
    {
        min_node->index = index++;
        min_node = get_next_min(stack);
    }
}
