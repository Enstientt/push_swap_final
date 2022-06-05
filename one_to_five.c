/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_to_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:44:39 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/04 16:48:52 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	sort_two(t_nums **a)
{
	if ((*a)->num > (*a)->next->num)
	{
		swap_a(a);
		write(1, "sa\n", 3);
		return (1);
	}
	else
		return (0);
}

int	sort_four(t_nums **a, t_nums **b)
{
	int	i;
	int	pos;

	i = 0;
	push_b(a, b);
	write(1, "pb\n", 3);
	i++;
	i += sort_three(a);
	if (*b)
	{
		pos = 0;
		pos = pos_for_a(a, b, pos);
		i += x_amount_of(a, pos);
		push_a(a, b);
		write(1, "pa\n", 3);
		i += x_amount_of(a, smalest_pos(*a));
	}
	return (i);
}

int	one_to_five(t_nums **a, t_nums **b, int argc)
{
	int	i;

	i = 0;
	if (argc == 2)
		return (0);
	else if (argc == 3)
		i += sort_two(a);
	else if (argc == 4)
		i += sort_three(a);
	else if (argc == 5)
		i += sort_four(a, b);
	else if (argc == 6)
		i += sort_five(a, b, i);
	return (i);
}
