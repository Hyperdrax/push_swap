/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:51:22 by flhensel          #+#    #+#             */
/*   Updated: 2026/01/19 14:55:38 by flhensel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	is_valid_num(const char *s)
{
	int	i;

	i = 0;
	if (!s || !s[0])
		return (0);
	while (s[i])
	{
		if (!ft_isdigit((unsigned char)s[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_int_overflow(const char *s, int *out)
{
	long long	res;
	int			i;

	res = 0;
	i = 0;
	while (s[i])
	{
		res = res * 10 + (s[i] - '0');
		if (res > INT_MAX)
			return (0);
		i++;
	}
	*out = (int)res;
	return (1);
}

int	get_count(char **args, int start)
{
	int	n;
	int	i;

	n = 0;
	i = start;
	while (args[i++])
		n++;
	return (n);
}
