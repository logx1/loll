/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_fun.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:08:27 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/30 16:52:42 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_data	*stack)
{
	int	i;
	int	tmp;
	int	tmp_p;

	i = 0;
	tmp = stack[0].val;
	tmp_p = stack[0].pos;
	while (stack[i + 1].pos)
	{
		stack[i].val = stack[i + 1].val;
		stack[i].pos = stack[i + 1].pos;
		i++;
	}
	stack[i].val = tmp;
	stack[i].pos = tmp_p;
	write(1, "ra\n", 3);
}

void	ft_rb(t_data	*stack)
{
	int	i;
	int	tmp;
	int	tmp_p;

	i = 0;
	tmp = stack[0].val;
	tmp_p = stack[0].pos;
	while (stack[i + 1].pos)
	{
		stack[i].val = stack[i + 1].val;
		stack[i].pos = stack[i + 1].pos;
		i++;
	}
	stack[i].val = tmp;
	stack[i].pos = tmp_p;
	write(1, "rb\n", 3);
}

void	ft_rra(t_data *stack)
{
	int	end;
	int	stack_end;
	int	stack_end_p;

	end = git_big_pos(stack);
	stack_end = stack[end].val;
	stack_end_p = stack[end].pos;
	while (end != 0)
	{
		stack[end].val = stack[end - 1].val;
		stack[end].pos = stack[end - 1].pos;
		end--;
		if (end == 0)
		{
			stack[0].val = stack_end;
			stack[0].pos = stack_end_p;
		}
	}
	write(1, "rra\n", 4);
}

void	ft_rrb(t_data *stack)
{
	int	end;
	int	stack_end;
	int	stack_end_p;

	end = git_big_pos(stack);
	stack_end = stack[end].val;
	stack_end_p = stack[end].pos;
	while (end != 0)
	{
		stack[end].val = stack[end - 1].val;
		stack[end].pos = stack[end - 1].pos;
		end--;
		if (end == 0)
		{
			stack[0].val = stack_end;
			stack[0].pos = stack_end_p;
		}
	}
	write(1, "rrb\n", 4);
}
