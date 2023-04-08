/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:42:49 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/04/02 15:38:38 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fun11(t_help *help, t_data *stack_a, t_data *stack_b)
{
	if (help->i <= help->end)
		(help->i)++;
	if (help->j < help->end)
		(help->j)++;
	ft_push_b(stack_a, stack_b);
}

void	fun22(t_help *help, t_data *stack_a, t_data *stack_b)
{
	if (help->i <= help->end)
		(help->i)++;
	if (help->j < help->end)
		(help->j)++;
	ft_push_b(stack_a, stack_b);
	ft_rb(stack_b);
}

void	fun33(int *i, int *j)
{
	*i = 0;
	*j = 30;
}

void	funxx(t_help *help, t_data *stack_a, t_data *stack_b)
{
	ft_rra(stack_a);
	ft_push_b(stack_a, stack_b);
	if (help->i <= help->end)
		(help->i)++;
	if (help->j < help->end)
		(help->j)++;
}

void	sort_500(t_data *stack_a, t_data *stack_b)
{
	t_help	help;

	help.ko = malloc(sizeof(int) * get_lenght(stack_a) + 1);
	help.ko = nurmal_sort(stack_a, help.ko);
	fun33(&help.i, &help.j);
	help.end = get_lenght(stack_a);
	while (get_lenght(stack_a))
	{
		if (stack_a[0].val >= help.ko[help.i]
			&& stack_a[0].val <= help.ko[help.j])
			fun11(&help, stack_a, stack_b);
		if (stack_a[get_lenght(stack_a) - 1].val >= help.ko[help.i]
			&& stack_a[get_lenght(stack_a) - 1].val <= help.ko[help.j])
			funxx(&help, stack_a, stack_b);
		if (stack_a[0].val <= help.ko[help.i])
			fun22(&help, stack_a, stack_b);
		if (stack_a[0].val >= help.ko[help.j])
			ft_ra(stack_a);
	}
	free(help.ko);
}
