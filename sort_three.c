/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:53:30 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/03 20:03:12 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	sort_three(t_nums **nbr)
{
	int	a;
	int	b;
	int	c;
	int	i;

	i = 0;
	a = (*nbr)->num;
	b = (*nbr)->next->num;
	c = (*nbr)->next->next->num;
	if (c > a && a > b && c > b)
		i += sort_three_sa(nbr);
	if (a > c && c > b && a > b)
		i += sort_three_ra(nbr);
	if (b > a && a > c && b > c)
		i += sort_three_rra(nbr);
	if (a > b && b > c && a > c)
		i += sort_three_sa_rra(nbr);
	if (b > c && c > a && b > a)
		i += sort_three_sa_ra(nbr);
	return (i);
}
