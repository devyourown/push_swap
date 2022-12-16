/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:21:17 by hyojulee          #+#    #+#             */
/*   Updated: 2022/12/16 20:07:48 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H

# include "./helper/constants.h"

struct	s_stack;

struct s_stack	*make_stack(int *arr, int size);
int				get_size(struct s_stack *stack);
int				pop(struct s_stack *stack);
void			push(struct s_stack *stack, int value);
t_boolean		is_sorted(struct s_stack *stack);

#endif
