/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nurmal_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:32:02 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/30 16:52:15 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapp(int *shdow, int *j)
{
	int	tmp;

	tmp = 0;
	if (shdow[*j] > shdow[*j + 1])
	{
		tmp = shdow[*j];
		shdow[*j] = shdow[*j + 1];
		shdow[*j + 1] = tmp;
	}
}

int	*nurmal_sort(t_data *lol, int *shdow)
{
	int	i;
	int	j;
	int	end;
	int	t_end;

	i = 0;
	end = git_big_pos(lol);
	t_end = end;
	while (t_end >= 0)
	{
		shdow[t_end] = lol[t_end].val;
		t_end--;
	}
	while (i < end)
	{
		j = 0;
		while (j < end)
		{
			ft_swapp(shdow, &j);
			j++;
		}
	i++;
	}
	return (shdow);
}
