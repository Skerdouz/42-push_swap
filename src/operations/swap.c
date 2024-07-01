/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:32:47 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/01 16:30:30 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_double_list **stack)
{
	t_double_list	*first;
	t_double_list	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	first->previous = second;
	if (first->next)
		first->next->previous = first;
	second->previous = NULL;
}

void	sa(t_double_list **a_stack)
{
	swap(a_stack);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_double_list **b_stack)
{
	swap(b_stack);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_double_list **a_stack, t_double_list **b_stack)
{
	swap(a_stack);
	swap(b_stack);
	ft_putstr_fd("ss\n", 1);
}
