/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_fun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:54:56 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/30 16:52:20 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	git_big_pos(t_data	*stack)
{
	int	i;

	i = 0;
	while (stack[i].pos)
		i++;
	if (i != 0)
		return (i - 1);
	else
		return (i);
}

void	ft_push_a(t_data *stack_a, t_data *stack_b)
{
	int	i;
	int	end;

	i = 0;
	end = git_big_pos(stack_a);
	while (end != -1)
	{
		stack_a[end + 1].val = stack_a[end].val;
		stack_a[end + 1].pos = stack_a[end].pos;
		end--;
		if (end == -1)
		{
			stack_a[0].val = stack_b[0].val;
			stack_a[0].pos = stack_b[0].pos;
		}
	}
	while (stack_b[i].pos)
	{
		stack_b[i].val = stack_b[i + 1].val;
		stack_b[i].pos = stack_b[i + 1].pos;
		i++;
	}
	write(1, "pa\n", 3);
}

void	ft_push_b(t_data *stack_a, t_data *stack_b)
{
	int	i;
	int	end;

	i = 0;
	end = git_big_pos(stack_b);
	while (end != -1)
	{
		stack_b[end + 1].val = stack_b[end].val;
		stack_b[end + 1].pos = stack_b[end].pos;
		end--;
		if (end == -1)
		{
			stack_b[0].val = stack_a[0].val;
			stack_b[0].pos = stack_a[0].pos;
		}
	}
	while (stack_a[i].pos)
	{
		stack_a[i].val = stack_a[i + 1].val;
		stack_a[i].pos = stack_a[i + 1].pos;
		i++;
	}
	write(1, "pb\n", 3);
}
