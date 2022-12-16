/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_command2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:45:22 by hyojulee          #+#    #+#             */
/*   Updated: 2022/12/16 21:58:16 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

struct s_stack
{
	int		*stack;
	int		index;
	char	stack_name;
};


void	reverse_rotate(struct s_stack *stack)
{
	int	next;
	int	index;
	int	temp;

	index = stack->index - 1;
	next = stack->stack[stack->index];
	stack->stack[stack->index] = stack->stack[0];
	while (index >= 0)
	{
		temp = stack->stack[index];
		stack->stack[index] = next;
		if (index >= 1)
			next = temp;
		index--;
	}
	write(1, "rr", 2);
	write(1, &stack->stack_name, 1);
	write(1, "\n", 1);
}

void	reverse_rotate_all(struct s_stack *a, struct s_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
