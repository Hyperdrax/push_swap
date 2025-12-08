#include "push_swap.h"
#include <stdio.h>

t_stack_node	*stack_new(int value)
{
    t_stack_node	*new;

    new = (t_stack_node *)malloc(sizeof(t_stack_node));
    if (!new)
        return (NULL);
    new->value = value;
    new->index = -1;
    new->next = NULL;
    return (new);
}

void	stack_add_back(t_stack_node **stack, t_stack_node *new)
{
    t_stack_node	*current;

    if (!new)
        return ;
    if (!*stack)
    {
        *stack = new;
        return ;
    }
    current = *stack;
    while (current->next)
        current = current->next;
    current->next = new;
}

void	print_stack(t_stack_node **stack)
{
    t_stack_node	*current;

    if (!stack || !*stack)
    {
        printf("Stack is empty\n");
        return ;
    }
    current = *stack;
    printf("Stack:\n");
    while (current)
    {
        printf("value: %d, index: %d\n", current->value, current->index);
        current = current->next;
    }
    printf("---\n");
}
