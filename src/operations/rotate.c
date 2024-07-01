/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:33:58 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/01 17:32:46 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_double_list **stack)
{
	t_double_list	*first;
	t_double_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	last = stack_getlastnode(*stack);
	last->next = first;
	first->next = NULL;
}

void	ra(t_double_list **a_stack)
{
	rotate(a_stack);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_double_list **b_stack)
{
	rotate(b_stack);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_double_list **a_stack, t_double_list **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
	ft_putstr_fd("rr\n", 1);
}
