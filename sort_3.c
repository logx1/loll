/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 18:02:25 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/30 16:52:48 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_lenght(t_data	*stack)
{
	int	i;

	i = 0;
	while (stack[i].pos)
		i++;
	return (i);
}

void	sort_three(t_data *stack_a)
{
	if (get_lenght(stack_a) == 3)
	{
		if (stack_a[0].val > stack_a[1].val && stack_a[1].val < stack_a[2].val
			&& stack_a[0].val < stack_a[2].val)
			ft_sa(stack_a);
		if (stack_a[0].val > stack_a[1].val && stack_a[1].val > stack_a[2].val)
		{
			ft_sa(stack_a);
			ft_rra(stack_a);
		}
		if (stack_a[0].val > stack_a[1].val && stack_a[1].val < stack_a[2].val
			&& stack_a[0].val > stack_a[2].val)
			ft_ra(stack_a);
		if (stack_a[0].val < stack_a[1].val && stack_a[1].val > stack_a[2].val
			&& stack_a[0].val < stack_a[2].val)
		{
			ft_sa(stack_a);
			ft_ra(stack_a);
		}
		if (stack_a[0].val < stack_a[1].val && stack_a[1].val > stack_a[2].val
			&& stack_a[0].val > stack_a[2].val)
			ft_rra(stack_a);
	}
	if (get_lenght(stack_a) == 2 && stack_a[0].val > stack_a[1].val)
		ft_sa(stack_a);
}
