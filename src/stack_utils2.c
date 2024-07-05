/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:50:13 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/05 12:55:45 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_double_list **stack)
{
	int	len;

	len = 0;
	while (*stack)
	{
		*stack = (*stack)->next;
		len++;
	}
	return (len);
}