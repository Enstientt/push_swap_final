/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_med.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:04:41 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/05 16:03:52 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	exact_pos(t_nums *a, t_nums *b, int start)
{
	while (a)
	{
		if (b->num < a->num)
			return (start);
		a = a->next;
		start++;
	}
	return (start);
}

int	find_pos(t_nums *a, t_nums *b)
{
	t_nums	*tmp1;
	int		biggest_index;
	t_nums	*reference;
	int		i;

	i = 0;
	tmp1 = a;
	biggest_index = find_big_pos(tmp1);
	if (b->num > find_big(a) || b->num < find_smal(a))
		return (biggest_index + 1);
	while (tmp1 && i < biggest_index)
	{
		tmp1 = tmp1->next;
		i++;
	}
	reference = a;
	i++;
	tmp1 = tmp1->next;
	i = exact_pos(tmp1, b, i);
	if (i == tot_b(a))
	{
		i = 0;
		i += exact_pos(reference, b, i);
	}
	return (i);
}

void	push_stackb(t_nums **a, t_nums **b, int i)
{
	t_nums	*tmp1;
	t_nums	*tmp2;

	tmp1 = *a;
	tmp2 = *b;
	while (i)
	{
		if ((*a)->vote == 0)
		{
			push_b(a, b);
			write (1, "pb\n", 3);
			i--;
		}
		else
		{
			rotate_a(a);
			write(1, "ra\n", 3);
		}
	}
}

void	min_inst(t_nums **a, t_nums **b)
{
	t_nums	*tmp1;
	t_nums	*tmp2;
	int		i;

	i = 0;
	tmp1 = *a;
	tmp2 = *b;
	while (tmp2)
	{
		tmp2->moves = amount_moves(tot_b(*b), i)
			+ amount_moves(tot_b(*a), find_pos(tmp1, tmp2));
		tmp2 = tmp2->next;
		i++;
	}
}

void	sort_med(t_nums **a, t_nums **b)
{
	int		i;

	i = the_ultimate_lis(a);
	push_stackb(a, b, tot_b(*a) - i);
	while (*b)
	{
		min_inst(a, b);
		which_x_amount(b, find_min(*b));
		x_amount_of(a, find_pos(*a, *b));
		push_a(a, b);
		write (1, "pa\n", 3);
	}
	x_amount_of(a, smalest_pos(*a));
}
