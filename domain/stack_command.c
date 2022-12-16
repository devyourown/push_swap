/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:31:56 by hyojulee          #+#    #+#             */
/*   Updated: 2022/12/16 21:48:27 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

struct s_stack
{
	int	*stack;
	int	index;
};

void	swap(struct s_stack *stack)
{
	int		last;
	int		next;

	last = pop(stack);
	next = pop(stack);
	push(stack, last);
	push(stack, next);
}

void	swap_all(struct s_stack *a, struct s_stack *b)
{
	swap(a);
	swap(b);
}

void	push_to_from(struct s_stack *to, struct s_stack *from)
{
	push(to, pop(from));
}

void	rotate(struct s_stack *stack)
{
	int	next;
	int	index;
	int	temp;

	index = 1;
	next = stack->stack[0];
	stack->stack[0] = stack->stack[stack->index];
	while (index <= stack->index)
	{
		temp = stack->stack[index];
		stack->stack[index] = next;
		if (index < stack->index)
			next = temp;
		index++;
	}
}

void	rotate_all(struct s_stack *a, struct s_stack *b)
{
	rotate(a);
	rotate(b);
}
