/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fil_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:49:21 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/03/30 16:52:09 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_word_count(char **str, char c)
{
	int	count;
	int	i;
	int	j;

	j = 1;
	count = 0;
	while (str[j])
	{
	i = 0;
		while (str[j][i])
		{
			if (str[j][i] == c)
			i++;
			else
			{
			count++;
				while (str[j][i] != c && str[j][i])
					i++;
			}
		}
	j++;
	}
	return (count);
}

t_data	*fill_stack(char **str, t_data *lol)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	j = 1;
	while (str[j])
	{
	i = 0;
		while (str[j][i])
		{
			if (str[j][i] == ' ')
				i++;
			else
			{
			lol[count].val = ft_atoi(&str[j][i]);
			lol[count].pos = j ;
			count++;
				while (str[j][i] != ' ' && str[j][i])
					i++;
			}
		}
	j++;
	}
	return (lol);
}
