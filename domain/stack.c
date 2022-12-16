/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:37:13 by hyojulee          #+#    #+#             */
/*   Updated: 2022/12/16 20:05:59 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdlib.h>

struct s_stack {
	int	*stack;
	int	index;
};

struct s_stack	*make_stack(int *arr, int size)
{
	struct s_stack	*stack;

	stack = malloc(sizeof(struct s_stack));
	stack->stack = arr;
	stack->index = size - 1;
	return (stack);
}

int	get_size(struct s_stack *stack)
{
	return (stack->index + 1);
}

int	pop(struct s_stack *stack)
{
	return (stack->stack[stack->index--]);
}

void	push(struct s_stack *stack, int value)
{
	stack->stack[++(stack->index)] = value;
}

t_boolean	is_sorted(struct s_stack *stack)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i <= stack->index)
	{
		while (j <= stack->index)
		{
			if (stack->stack[i] > stack->stack[j])
				return (false);
			j++;
		}
		i++;
		j = 0;
	}
	return (true);
}
