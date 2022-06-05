/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:24:51 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/05 16:20:31 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "get_next_line.h"

typedef struct s_nums{
	long			num;
	int				max;
	int				vote;
	int				moves;
	struct s_nums	*next;
	struct s_nums	*prev;
}				t_nums;

char		**ft_split(char const *str, char c, int *con);
void		great_list(int argc, char **argv, t_nums **a, int flag);
void		push_a(t_nums **a, t_nums **b);
void		push_b(t_nums **a, t_nums **b);
void		rotate_b(t_nums **b);
void		rotate_a(t_nums **a);
void		rr(t_nums **a, t_nums **b);
void		reverse_a(t_nums **a);
void		reverse_b(t_nums **a);
void		rrr(t_nums **a, t_nums **b);
void		app_command(char *str, t_nums **a, t_nums **b);
void		swap_a(t_nums **a);
void		swap_b(t_nums **a);
void		swap_ab(t_nums **a, t_nums **b);
void		free_here(t_nums **all);
void		free_a_and_b(t_nums **a, t_nums **b);
void		push(long long value, t_nums **a);
long long	ft_atoi_digit_confirm(const char *str, t_nums **a);
void		dup_check_c(t_nums *head, int nbr, t_nums **a);
int			grab_command(t_nums **a, t_nums **b);
int			ft_strncmp(const char *s1, const char *s2);
int			check_sort_at_end(t_nums *nums, t_nums *b);

#endif