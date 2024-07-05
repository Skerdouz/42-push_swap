/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:51:12 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/05 11:39:48 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errorhandler(char *str)
{
	/* TODO: free all the chained list */
	ft_putstr_fd("Error", 2);
	ft_putstr_fd(str, 2);
	exit(EXIT_FAILURE);
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
	if (!stack_issorted(&a_stack))
	{
		radix_sort(&a_stack);
	}
	return (0);
}
