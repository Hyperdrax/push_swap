/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:51:44 by flhensel          #+#    #+#             */
/*   Updated: 2026/01/19 14:57:03 by flhensel         ###   ########.fr       */
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
int				push(t_stack_node **stack_to, t_stack_node **stack_from);
int				pa(t_stack_node **stack_a, t_stack_node **stack_b);
int				pb(t_stack_node **stack_a, t_stack_node **stack_b);
int				swap(t_stack_node **stack);
int				sa(t_stack_node **stack_a);
int				sb(t_stack_node **stack_b);
int				ss(t_stack_node **stack_a, t_stack_node **stack_b);
int				rotate(t_stack_node **stack);
int				ra(t_stack_node **stack_a);
int				rb(t_stack_node **stack_b);
int				rr(t_stack_node **stack_a, t_stack_node **stack_b);
int				reverse_rotate(t_stack_node **stack);
int				rra(t_stack_node **stack_a);
int				rrb(t_stack_node **stack_b);
int				rrr(t_stack_node **stack_a, t_stack_node **stack_b);
int				find_min_index(t_stack_node **stack);
int				is_stack_sorted(t_stack_node **stack);
void			sort_three(t_stack_node **stack_a);
int				stack_size(t_stack_node *stack);
void			sort_four(t_stack_node **stack_a, t_stack_node **stack_b);
void			free_stack(t_stack_node **stack);
void			radix_sort(t_stack_node **stack_a, t_stack_node **stack_b);
int				is_valid_num(const char *s);
int				check_int_overflow(const char *s, int *out);
int				get_count(char **args, int start);
//static int	is_numeric_token(const char *s);
//static int	parse_to_int_safe(const char *s, int *out);
//static void	print_error(void);
//static int	count_tokens(int ac, char **args);
int				validate_inputs(int ac, char **av);

#endif