/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:44:30 by hyojulee          #+#    #+#             */
/*   Updated: 2022/12/16 20:51:08 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "../stack.h"

void	swap(struct s_stack *stack);
void	swap_all(struct s_stack *a, struct s_stack *b);
void	push(struct s_stack *to, struct s_stack *from);
void	rotate(struct s_stack *stack);
void	rotate_all(struct s_stack *a, struct s_stack *b);
void	reverse_rotate(struct s_stack *stack);
void	reverse_rotate_all(struct s_stack *a, struct s_stack *b);


#endif
