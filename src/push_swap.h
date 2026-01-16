/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:51:44 by flhensel          #+#    #+#             */
/*   Updated: 2025/12/08 10:36:55 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack_node
{
    int					value;
    int					index;
    struct s_stack_node	*next;
}	t_stack_node;

// Stack utilities
t_stack_node	*stack_new(int value);
void			stack_add_back(t_stack_node **stack, t_stack_node *new);
void			index_stack(t_stack_node **stack);
void			print_stack(t_stack_node **stack);
t_stack_node	*stack_last(t_stack_node *stack);

// Push
int push (t_stack_node **stack_to, t_stack_node **stack_from);
int pa (t_stack_node **stack_a, t_stack_node **stack_b);
int pb (t_stack_node **stack_a, t_stack_node **stack_b);

// Swap
int swap (t_stack_node **stack);
int sa (t_stack_node **stack_a);
int sb (t_stack_node **stack_b);
int ss (t_stack_node **stack_a, t_stack_node **stack_b);

// Rotate

int rotate(t_stack_node **stack);
int ra(t_stack_node **stack_a);
int rb(t_stack_node **stack_b);
int	rr(t_stack_node **stack_a, t_stack_node **stack_b);

// Reverse Rotate

int reverse_rotate(t_stack_node **stack);
int rra (t_stack_node **stack_a);
int rrb (t_stack_node **stack_b);
int	rrr(t_stack_node **stack_a, t_stack_node **stack_b);

// Sorting
void sort_three(t_stack_node **stack_a);
void sort_four(t_stack_node **stack_a, t_stack_node **stack_b);
int find_min_index(t_stack_node **stack);

// Utility
int is_stack_sorted(t_stack_node **stack);
void free_stack(t_stack_node **stack);
int stack_size(t_stack_node *stack);

#endif