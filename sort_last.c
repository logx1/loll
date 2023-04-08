/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:07:25 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/04/04 16:16:21 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_big(t_data *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = stack[0].val;
	while (i < get_lenght(stack))
	{
		if (tmp < stack[i].val)
		{
			tmp = stack[i].val;
			j = i;
		}
		i++;
	}
	return (j);
}

void	push_big(t_data *stack_a, t_data *stack_b)
{
	int	i;
	int	big;

	i = 0;
	big = get_big(stack_b);
	if (big <= get_lenght(stack_b) / 2)
	{
		while (i < big)
		{
			ft_rb(stack_b);
			i++;
		}
	}
	if (big > get_lenght(stack_b) / 2)
	{
		while (i < (get_lenght(stack_b) - big))
		{
			ft_rrb(stack_b);
			i++;
		}
	}
	ft_push_a(stack_a, stack_b);
}

void	sort_lol(t_data *stack_a, t_data *stack_b)
{
	int	i;

	i = get_lenght(stack_b);
	while (i > 0)
	{
		push_big(stack_a, stack_b);
		i--;
	}
}
