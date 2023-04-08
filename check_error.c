/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:11:37 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/04/02 15:14:54 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	long_atoi(const char *str)
{
	long	rus;
	long	i;
	int		sign;

	i = 0;
	rus = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		rus = (rus * 10) + str[i] - 48;
		i++;
	}
	return (rus * sign);
}

void	funn3(int *i, int *x, int *l)
{
	*i = 1;
	*x = 0;
	*l = 0;
}

int	check_error_1(char **a_rgv, int __attribute__((unused))a_rgc)
{
	t_help1	help;

	funn3(&help.i, &help.x, &help.l);
	while (a_rgv[help.i])
	{
		help.j = 0;
		while (a_rgv[help.i][help.j])
		{
			help.l += a_rgv[help.i][help.j];
			if ((a_rgv[help.i][help.j] > '9' || a_rgv[help.i][help.j] < '0')
				&& a_rgv[help.i][help.j] != ' ')
				help.x++;
			if ((a_rgv[help.i][help.j] == '-' || a_rgv[help.i][help.j] == '+')
				&& (a_rgv[help.i][help.j - 1] == ' ' || help.j == 0)
					&& (a_rgv[help.i][help.j + 1] <= '9'
						&& a_rgv[help.i][help.j + 1] >= '0'))
				help.x--;
			help.j++;
		}
		if (help.l == 32 * help.j)
			help.x++;
		help.l = 0;
		help.i++;
	}
	return (help.x);
}

int	check_error_2(t_data *stack)
{
	int	i;
	int	j;
	int	cond;

	j = 0;
	cond = 0;
	while (stack[j].pos)
	{
		i = 0;
		while (stack[i].pos)
		{
			if (stack[j].val == stack[i].val && j != i)
				cond++;
		i++;
		}
		j++;
	}
	return (cond);
}

int	check_long(char **str)
{
	int	i;
	int	j;
	int	lol;

	j = 1;
	lol = 0;
	while (str[j])
	{
	i = 0;
		while (str[j][i])
		{
			if (str[j][i] == ' ')
				i++;
			else
			{
				if (long_atoi(&str[j][i]) > 2147483647
					|| long_atoi(&str[j][i]) < -2147483648)
					lol++;
				while (str[j][i] != ' ' && str[j][i])
					i++;
			}
		}
	j++;
	}
	return (lol);
}
