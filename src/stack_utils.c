/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:24:11 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/05 12:34:58 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_isduplicate(t_double_list *node, int value)
{
	while (node)
	{
		// printf("node value: %d, value: %d\n", node->value, value);
		if (node->value == value)
			return (1);
		node = node->next;
	}
	return (0);
}

int	stack_issorted(t_double_list **stack)
{
	long	cur_val;

	cur_val = 0;
	while (*stack)
	{
		if (cur_val > (*stack)->value)
			return (0);
		cur_val = (*stack)->value;
		*stack = (*stack)->next;
	}
	return (1);
}

t_double_list	*stack_getlastnode(t_double_list *node)
{
	if (!node)
		return (NULL);
	if (!node->next)
		return (node);
	while (node->next)
		node = node->next;
	return (node);
}

void	stack_addlast(t_double_list **stack, int value)
{
	t_double_list	*node;
	t_double_list	*last_node;

	if (!stack)
		errorhandler("stack_addlast:no stack");
	node = malloc (1 * sizeof(t_double_list));
	if (!node)
		errorhandler("stack_addlast:malloc");
	node->value = value;
	node->next = NULL;
	if (!*stack)
	{
		*stack = node;
		node->previous = NULL;
	}
	else
	{
		last_node = stack_getlastnode(*stack);
		last_node->next = node;
		node->previous = last_node;
	}
}

void	stack_init(char **av, t_double_list **stack)
{
	long	value;

	while(*av)
	{

		if (!ft_strisnumber(*av))
			errorhandler("stack_init:not digit");
		value = atol(*av);
		if (value > INT_MAX || value < INT_MIN)
			errorhandler("stack_init:int min/max");
		if (stack_isduplicate(*stack, (int)value))
			errorhandler("stack_init:duplicate");
		stack_addlast(stack, (int)value);
		av++;
	}
}
