/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:53:36 by flhensel          #+#    #+#             */
/*   Updated: 2025/12/08 10:43:16 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void fill_a(t_stack_node **stack, int ac, char** av)
{
    int				i;
    char			**args;
    t_stack_node	*new;

    i = 0;
    if (ac == 2)
        args = ft_split(av[1], ' ');
    else
    {
        i = 1;
        args = av;
    }
    while (args[i])
    {
        new = stack_new(ft_atoi(args[i]));
        stack_add_back(stack, new);
        i++;
    }
    index_stack(stack);
    if (ac == 2)
        free(args);
}

int main(int ac, char **av)
{
    t_stack_node **stack_a;
    t_stack_node **stack_b;

    if (ac < 2)
        return(-1);
    stack_a = (t_stack_node **)malloc(sizeof(t_stack_node));
    stack_b = (t_stack_node **)malloc(sizeof(t_stack_node));
    *stack_a = NULL;
    *stack_b = NULL;
    fill_a(stack_a, ac, av);
    print_stack(stack_a);
    // Sort_stack
    return (0);
}