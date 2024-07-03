/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:51:12 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/03 18:59:35 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	errorhandler()
{
	/* TODO: free all the chained list */
	ft_putstr_fd("Error", 2);
}

static int	isduplicate(t_double_list *node, int value)
{
	if (node)
	{
		while (node)
		{
			if (node->value == value)
				return (1);
			node = node->next;
		}
	}
	return (0);
}

void	stack_init(char **av, t_double_list **stack)
{
	long	value;

	while(*av)
	{
		if (!ft_isnumber(*av))
			errorhandler();
		value = ft_atol(*av);
		if (value > INT_MAX || value < INT_MIN)
			errorhandler();
		if (isduplicate(*stack, (int)value))
			errorhandler();
		stack_addlast(stack, (int)value);
		av++;
	}
}

int	main(int ac, char **av)
{
	t_double_list	*a_stack;

	a_stack = NULL;
	if (--ac < 1 || (ac == 1 && !av[1][0]))
		return (1);
	if (ac == 1)
		av = ft_split(av[1], ' ');
	else
		av++;
	stack_init(av, &a_stack);
	return (0);
}

long	ft_atol(char *str)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	while (*str)
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign = -1;
			str++;
		}
		/*TODO*/
	}
	return (n * sign);
}
