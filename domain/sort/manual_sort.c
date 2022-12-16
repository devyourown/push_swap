/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manual_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:49:52 by hyojulee          #+#    #+#             */
/*   Updated: 2022/12/16 21:51:10 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	sort_3(struct s_stack *a)
{
	if (is_highlowmid(a))
		sa(answer);
	else if (is_lowmidhigh(a))
	{
		ra(answer);
		sa(answer);
	}
	else if (is_lowhighmid(a))
		rra(answer);
	else if (is_midhighlow(a))
	{
		rra(answer);
		sa(answer);
	}
	else if (is_midlowhigh(a))
		ra(answer);
}
