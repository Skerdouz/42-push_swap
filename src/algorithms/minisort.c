/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:05:57 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/05 16:06:22 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap_values(t_double_list *current, t_double_list *min)
{
	int	temp;

	temp = current->value;
	current->value = min->value;
	min->value = temp;
	return (1);
}

void	minisort(t_double_list **stack)
{
	t_double_list	*first;
	t_double_list	*min_node;
	int				swapped;

	first = *stack;
	min_node = (*stack)->value;
	while (swapped == 1)
	{
		swapped = 0;
		while (*stack)
		{
			if ((*stack)->value < min_node->value)
			{
				swapped = swap_values(*stack, min_node);
				*stack = first;
			}
			if (!swapped)
				break ;
		}
	}
}
