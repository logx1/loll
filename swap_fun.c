/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_fun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:15:21 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/04/02 12:11:12 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_data	*stack)
{
	int	tmp;

	tmp = stack[0].val;
	stack[0].val = stack[1].val;
	stack[1].val = tmp;
	write(1, "sa\n", 3);
}

void	ft_sb(t_data	*stack)
{
	int	tmp;

	tmp = stack[0].val;
	stack[0].val = stack[1].val;
	stack[1].val = tmp;
	write(1, "sb\n", 3);
}
