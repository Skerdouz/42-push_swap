/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:56:23 by lbrahins          #+#    #+#             */
/*   Updated: 2024/06/26 17:49:33 by lbrahins         ###   ########.fr       */
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
*	stack_utils.c
*/
t_double_list	*stack_getlastnode(t_double_list *node);
void			stack_addlast(t_double_list **stack, int value);

#endif
