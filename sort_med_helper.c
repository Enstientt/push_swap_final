/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_med_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:32:04 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/05 14:34:56 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	smalest_pos(t_nums *a)
{
	long	min;
	int		index;
	t_nums	*tmp;

	index = 0;
	tmp = a;
	min = INT_MAX;
	while (tmp)
	{
		if (min > tmp->num)
			min = tmp->num;
		tmp = tmp->next;
	}
	while (a)
	{
		if (a->num == min)
			return (index);
		index++;
		a = a->next;
	}
	return (index);
}

int	find_min(t_nums *a)
{
	int		min;
	int		index;
	t_nums	*tmp;

	index = 0;
	tmp = a;
	min = INT_MAX;
	while (tmp)
	{
		if (min > tmp->moves)
			min = tmp->moves;
		tmp = tmp->next;
	}
	while (a)
	{
		if (a->moves == min)
			return (index);
		a = a->next;
		index++;
	}
	return (index);
}

int	find_big_pos(t_nums *a)
{
	long	biggest;
	int		index;

	index = 0;
	biggest = find_big(a);
	while (a)
	{
		if (a->num == biggest)
			return (index);
		index++;
		a = a->next;
	}
	return (index);
}
