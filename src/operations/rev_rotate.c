/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:09:11 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/01 19:25:42 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_double_list **stack)
{
	t_double_list	*first;
	t_double_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = stack_getlastnode(*stack);
	first = *stack;
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = first;
	*stack = last;
}

void	rra(t_double_list **a_stack)
{
	reverse_rotate(a_stack);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_double_list **b_stack)
{
	reverse_rotate(b_stack);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_double_list **a_stack, t_double_list **b_stack)
{
	reverse_rotate(a_stack);
	reverse_rotate(b_stack);
	ft_putstr_fd("rrr\n", 1);
}