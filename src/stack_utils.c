/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:24:11 by lbrahins          #+#    #+#             */
/*   Updated: 2024/06/26 17:27:40 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		errorhandler();
	node = malloc (1 * sizeof(t_double_list));
	if (!node)
		errorhandler();
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
