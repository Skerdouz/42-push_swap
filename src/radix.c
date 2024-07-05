/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:06:54 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/05 11:25:02 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_max(t_double_list *stack)
{
	int	max;
	
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

static int	stack_size(t_double_list *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		++size;
		stack = stack->next;
	}
	return (size);
}

static void	sorter(t_double_list **a_stack, t_double_list **b_stack, int max_bits, int size)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a_stack)->value >> i) & 1) == 1)
				ra(a_stack);
			else
				pb(a_stack, b_stack);
			++j;
		}
		while (stack_size(*b_stack) > 0)
			pa(a_stack, b_stack);
		++i;
	}
}

void	radix_sort(t_double_list **a_stack)
{
	t_double_list	*b_stack;
	int				max;
	int				max_bits;
	int				size;

	b_stack = NULL;
	max = find_max(*a_stack);
	size = stack_size(*a_stack);
	max_bits = 0;
	while (max >> max_bits != 0)
		++max_bits;
	sorter(a_stack, &b_stack, max_bits, size);
}
