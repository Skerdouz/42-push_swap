/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:56:23 by lbrahins          #+#    #+#             */
/*   Updated: 2024/07/05 11:52:13 by lbrahins         ###   ########.fr       */
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
void			pa(t_double_list **a_stack, t_double_list **b_stack);
void			pb(t_double_list **a_stack, t_double_list **b_stack);
void			sa(t_double_list **a_stack);
void			sb(t_double_list **b_stack);
void			ss(t_double_list **a_stack, t_double_list **b_stack);
void			ra(t_double_list **a_stack);
void			rb(t_double_list **b_stack);
void			rr(t_double_list **a_stack, t_double_list **b_stack);
void			rra(t_double_list **a_stack);
void			rrb(t_double_list **b_stack);
void			rrr(t_double_list **a_stack, t_double_list **b_stack);
/*
*	main.c
*/
void			errorhandler();
/*
*	utils.c
*/
long			ft_atol(char *str);
int				ft_strisnumber(char *str);
/*
*	stack_utils.c
*/
t_double_list	*stack_getlastnode(t_double_list *node);
void			stack_init(char **av, t_double_list **stack);
void			stack_addlast(t_double_list **stack, int value);
int				stack_issorted(t_double_list **stack);
int				stack_isduplicate(t_double_list *node, int value);
/*
*	radix.c
*/
void			radix_sort(t_double_list **a_stack);
#endif
