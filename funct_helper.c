/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:06:27 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/03 16:57:53 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	x_ra(t_nums **a, int pos)
{
	int	i;

	i = pos;
	while (pos)
	{
		rotate_a(a);
		write(1, "ra\n", 3);
		pos--;
	}
	return (i);
}

int	x_rra(t_nums **a, int pos)
{
	int	i;

	pos = tot_b(*a) - pos;
	i = pos;
	while (pos)
	{
		reverse_a(a);
		write(1, "rra\n", 4);
		pos--;
	}
	return (i);
}

int	x_amount_of(t_nums **a, int positions)
{
	int	total;
	int	i;

	i = 0;
	total = tot_b(*a);
	if (positions > total / 2)
		i += x_rra(a, positions);
	else if (positions <= total / 2)
		i += x_ra(a, positions);
	return (positions);
}
