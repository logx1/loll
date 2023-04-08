/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:42:19 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/30 16:52:54 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_small(t_data *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = stack[0].val;
	while (i < get_lenght(stack))
	{
		if (tmp > stack[i].val)
		{
			tmp = stack[i].val;
			j = i;
		}
		i++;
	}
	return (j);
}

void	push_small(t_data *stack_a, t_data *stack_b)
{
	int	i;
	int	small;

	i = 0;
	small = get_small(stack_a);
	if (small <= get_lenght(stack_a) / 2)
	{
		while (i < small)
		{
			ft_ra(stack_a);
			i++;
		}
	}
	if (small > get_lenght(stack_a) / 2)
	{
		while (i < (get_lenght(stack_a) - small))
		{
			ft_rra(stack_a);
			i++;
		}
	}
	ft_push_b(stack_a, stack_b);
}

void	sort_5(t_data *stack_a, t_data *stack_b)
{
	push_small(stack_a, stack_b);
	push_small(stack_a, stack_b);
	sort_three(stack_a);
	ft_push_a(stack_a, stack_b);
	ft_push_a(stack_a, stack_b);
}
