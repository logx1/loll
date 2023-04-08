/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:50:14 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/04/08 02:24:37 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error_glob(int a_rgc, char **a_rgv, t_data *lol)
{
	if (check_error_1(a_rgv, a_rgc) == 0)
	{
		lol = fill_stack(a_rgv, lol);
		if (check_error_2(lol) == 0 && get_lenght(lol) != 0
			&& check_long(a_rgv) == 0)
		{
			return (0);
		}
	}
	return (1);
}

void	algo_choss(t_data *stack_a, t_data *stack_b, int length, char **argv)
{
	stack_a = fill_stack(argv, stack_a);
	if (length <= 3 && check(stack_a) != 0)
		sort_three(stack_a);
	if (length > 3 && length <= 5 && check(stack_a) != 0)
		sort_5(stack_a, stack_b);
	if (length > 5 && length <= 100 && check(stack_a) != 0)
		sort_100(stack_a, stack_b);
	if (length > 100 && check(stack_a) != 0)
		sort_500(stack_a, stack_b);
	if (length > 5 && length != 0)
		sort_lol(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_data	*stack_a;
	t_data	*stack_b;
	int		length;

	if (argc == 1)
		return (0);
	length = ft_word_count(argv, ' ');
	stack_a = malloc(sizeof(t_data) * length + 1);
	stack_b = malloc(sizeof(t_data) * length + 1);
	if (!stack_a || !stack_b)
		return (0);
	if (check_error_glob(argc, argv, stack_a) == 0)
		algo_choss(stack_a, stack_b, length, argv);
	else
		write(2, "Error\n", 6);
	free(stack_a);
	free(stack_b);
	return (0);
}
