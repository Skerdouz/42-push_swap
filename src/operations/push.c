/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:34:00 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/01 16:29:11 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_double_list **sub_stack, t_double_list **dom_stack)
{
	t_double_list	*temp;

	if (!dom_stack || !*dom_stack)
		return ;
	temp = *dom_stack;
	*dom_stack = (*dom_stack)->next;
	if (*dom_stack) /* could be null */
		(*dom_stack)->previous = NULL;
	if (*sub_stack)
		(*sub_stack)->previous = temp;
	temp->next = *sub_stack;
	temp->previous = NULL;
	*sub_stack = temp;
}

void	pa(t_double_list **a_stack, t_double_list **b_stack)
{
	push(a_stack, b_stack);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_double_list **a_stack, t_double_list **b_stack)
{
	push(b_stack, a_stack);
	ft_putstr_fd("pb\n", 1);
}
