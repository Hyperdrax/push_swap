/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:51:34 by flhensel          #+#    #+#             */
/*   Updated: 2026/01/19 15:03:16 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

static int	check_all(char **args, int start, int *vals, int n)
{
	int	i;
	int	j;
	int	val;

	i = 0;
	while (i < n)
	{
		if (!is_valid_num(args[start + i]))
			return (0);
		if (!check_int_overflow(args[start + i], &val))
			return (0);
		vals[i] = val;
		j = 0;
		while (j < i)
		{
			if (vals[j] == vals[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	do_validation(char **args, int start, int n)
{
	int	*vals;

	vals = (int *)malloc(sizeof(int) * n);
	if (!vals || !check_all(args, start, vals, n))
	{
		write(2, "Error\n", 6);
		if (vals)
			free(vals);
		return (0);
	}
	free(vals);
	return (1);
}

int	validate_inputs(int ac, char **av)
{
	char	**args;
	int		start;
	int		n;
	int		result;

	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av;
	start = 0;
	if (ac != 2)
		start = 1;
	n = get_count(args, start);
	result = do_validation(args, start, n);
	if (ac == 2)
		free(args);
	return (result);
}
