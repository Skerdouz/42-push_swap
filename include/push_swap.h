/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:56:23 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/01 16:30:50 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

# include "libft.h"

typedef struct s_double_list {
	int						value;
	struct s_double_list	*previous;
	struct s_double_list	*next;
}	t_double_list;

/*
*	operations/
*/
void	pa(t_double_list **a_stack, t_double_list **b_stack);
void	pb(t_double_list **a_stack, t_double_list **b_stack);
void	sa(t_double_list **a_stack);
void	sb(t_double_list **b_stack);
void	ss(t_double_list **a_stack, t_double_list **b_stack);
/*
*	stack_utils.c
*/
t_double_list	*stack_getlastnode(t_double_list *node);
void			stack_addlast(t_double_list **stack, int value);

#endif
