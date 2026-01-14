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

#endif