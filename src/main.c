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

int is_stack_sorted (t_stack_node **stack)
{
    t_stack_node *head;
    head = *stack;
    while (head && head->next)
    {
        if (head->value > head->next->value)
            return(0);
        head = head->next; 
    }
    return (1);
}

int stack_size(t_stack_node *stack)
{
    int count;
    t_stack_node *head;

    count = 0;
    head = stack;
    while (head)
    {
        count++;
        head = head->next;
    }
    return (count);
}

void sort(t_stack_node **stack_a, t_stack_node **stack_b)
{
    int size;

    if (is_stack_sorted(stack_a))
    {
        free_stack(stack_a);
        free_stack(stack_b);
        exit(0);
    }
    size = stack_size(*stack_a);
    if (size == 2)
        sa(stack_a);
    else if (size == 3)
        sort_three(stack_a);
    else if (size == 4)
        sort_four(stack_a, stack_b);
}

void free_stack(t_stack_node **stack)
{
    t_stack_node *head;
    t_stack_node *tmp;

    head = *stack;
    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
    free(stack);
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
    sort(stack_a, stack_b);
    print_stack(stack_a);
    return (0);
}
