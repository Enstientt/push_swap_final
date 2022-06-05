/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_sorte.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:12:24 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/04 11:57:23 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	rb_x_amount(t_nums **b, int pos)
{
	int	i;

	i = pos;
	while (pos != 0)
	{
		rotate_b(b);
		write(1, "rb\n", 3);
		pos--;
	}
	return (i);
}

int	rrb_x_amount(t_nums **b, int pos)
{
	int	i;
	int	tot;

	tot = tot_b(*b);
	if (pos == 0)
		return (0);
	pos = tot - pos;
	i = pos;
	if (pos > 0)
	{
		while (pos != 0)
		{
			reverse_b(b);
			write(1, "rrb\n", 4);
			pos--;
		}
	}
	return (i);
}

int	which_x_amount(t_nums **b, int pos)
{
	int	tot;
	int	i;

	tot = 0;
	tot = tot_b(*b);
	i = 0;
	if (pos < tot / 2)
		i += rb_x_amount(b, pos);
	if (pos > tot / 2)
		i += rrb_x_amount(b, pos);
	return (i);
}
