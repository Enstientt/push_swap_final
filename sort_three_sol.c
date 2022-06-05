/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_sol.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:38:00 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/03 20:01:12 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	sort_three_sa(t_nums **a)
{
	int	i;

	i = 1;
	swap_a(a);
	write(1, "sa\n", 3);
	return (i);
}

int	sort_three_ra(t_nums **a)
{
	int	i;

	i = 1;
	rotate_a(a);
	write(1, "ra\n", 3);
	return (i);
}

int	sort_three_rra(t_nums **a)
{
	int	i;

	i = 1;
	reverse_a(a);
	write(1, "rra\n", 4);
	return (i);
}

int	sort_three_sa_rra(t_nums **a)
{
	int	i;

	i = 2;
	swap_a(a);
	reverse_a(a);
	write(1, "sa\n", 3);
	write(1, "rra\n", 4);
	return (i);
}

int	sort_three_sa_ra(t_nums **a)
{
	int	i;

	i = 2;
	swap_a(a);
	rotate_a(a);
	write(1, "sa\n", 3);
	write(1, "ra\n", 4);
	return (i);
}
