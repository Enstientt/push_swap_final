/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_header.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:38:38 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/05 16:03:59 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_HEADER_H
# define CHECK_HEADER_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_nums{
	long			num;
	int				max;
	int				vote;
	int				moves;
	struct s_nums	*next;
	struct s_nums	*prev;
}				t_nums;
typedef struct s_var{
	int	i;
	int	j;
	int	*arr;
}				t_var;

void		great_list(int argc, char **argv, t_nums **a, int flag);
void		push_a(t_nums **a, t_nums **b);
void		push_b(t_nums **a, t_nums **b);
void		rotate_b(t_nums **b);
void		rotate_a(t_nums **a);
void		rr(t_nums **a, t_nums **b);
void		reverse_a(t_nums **a);
void		reverse_b(t_nums **a);
void		rrr(t_nums **a, t_nums **b);
void		swap_a(t_nums **a);
void		swap_b(t_nums **a);
void		swap_ab(t_nums **a, t_nums **b);
void		free_here(t_nums **all);
void		free_here(t_nums **all);
void		free_a_and_b(t_nums **a, t_nums **b);
void		push(long long value, t_nums **a);
int			the_ultimate_lis(t_nums **a);
void		duplicate_check(t_nums *head, int nbr, t_nums **a);
char		**ft_split(char const *str, char c, int *count);
void		sort_med(t_nums **a, t_nums **b);
int			amount_moves(int total, int range_pos);
int			check_sort(t_nums *nums);
int			tot_b(t_nums *b);
int			sort_three_sa(t_nums **a);
int			sort_three_ra(t_nums **a);
int			sort_three_rra(t_nums **a);
int			sort_three_sa_rra(t_nums **a);
int			sort_three_sa_ra(t_nums **a);
int			sort_five(t_nums **a, t_nums **b, int i);
long		find_big(t_nums *a);
int			find_smal(t_nums *a);
int			sort_three(t_nums **nbr);
int			x_ra(t_nums **a, int pos);
int			x_rra(t_nums **a, int pos);
int			x_amount_of(t_nums **a, int positions);
int			tot_b(t_nums *b);
int			pos_for_a(t_nums **a, t_nums **b, int pos);
void		printlist(t_nums **a);
int			which_x_amount(t_nums **b, int pos);
int			rrb_x_amount(t_nums **b, int pos);
int			rb_x_amount(t_nums **b, int pos);
int			one_to_five(t_nums **a, t_nums **b, int argc);
int			amount_rr_rrr(t_nums **a, t_nums **b, int count);
int			check_sort_at_end(t_nums *nums, t_nums *b);
int			smalest_pos(t_nums *a);
int			*table_init(int *arr, int size);
int			find_max(int *arr, t_nums *a);
long long	ft_atoi_digit_confirm(const char *str, t_nums **a);
int			find_big_pos(t_nums *a);
int			find_min(t_nums *a);

#endif
