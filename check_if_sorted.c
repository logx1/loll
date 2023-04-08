/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:04:30 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/30 16:51:53 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(t_data *stack)
{
	int	i;
	int	index;
	int	lengh;

	i = 0;
	index = 0;
	lengh = get_lenght(stack) - 1;
	while (i < lengh)
	{
		if (stack[i].val > stack[i + 1].val)
			index++;
		i++;
	}
	return (index);
}
