/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:50:10 by abdel-ou          #+#    #+#             */
/*   Updated: 2023/04/02 17:47:32 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_data
{
	int	val;
	int	pos;
}t_data;

typedef struct s_help
{
	int	i;
	int	j;
	int	end;
	int	*ko;
}t_help;

typedef struct s_help1
{
	int	i;
	int	j;
	int	x;
	int	l;
}t_help1;

t_data		*fill_stack(char **str, t_data *stack);
void		sprint(t_data *lol);
void		ft_sa(t_data *stack);
void		ft_sb(t_data *stack);
void		ft_ra(t_data *stack);
void		ft_rb(t_data *stack);
void		ft_rra(t_data *stack);
void		ft_rrb(t_data *stack);
void		ft_push_a(t_data *stack_a, t_data *stack_b);
void		ft_push_b(t_data *stack_a, t_data *stack_b);
void		sort_three(t_data *stack_a);
void		sort_lol(t_data *stack_a, t_data *stack_b);
void		my_sort(t_data *stack_a, t_data *stack_b);
void		final_sort(t_data *stack_a, t_data *stack_b);
void		send_small_halv(t_data *stack_a, t_data *stack_b);
void		sort_100(t_data *stack_a, t_data *stack_b);
void		sort_500(t_data *stack_a, t_data *stack_b);
void		sort_5(t_data *stack_a, t_data *stack_b);
int			check_error_1(char **a_rgv, int a_rgc);
int			check_error_2(t_data *stack);
int			check_error_glob(int a_rgc, char **a_rgv, t_data *lol);
int			get_big(t_data *stack);
int			git_big_pos(t_data *stack);
int			*nurmal_sort(t_data *lol, int *ko);
int			get_the_closer(t_data *stack);
int			ft_word_count(char **str, char c);
int			get_lenght(t_data *stack);
int			check(t_data *stack);
int			check_long(char **str);
#endif