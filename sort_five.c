/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:43:41 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/03 18:37:51 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

static int	push_bb(t_nums **a, t_nums **b, int i)
{
	i = 2;
	push_b(a, b);
	push_b(a, b);
	write(1, "pb\n", 3);
	write(1, "pb\n", 3);
	return (i);
}

static int	sort_a_big_or_small(t_nums **a, t_nums **b)
{
	long	b_largest;
	long	b_smallest;
	int		b_small_pos;
	int		i;

	i = 0;
	b_largest = find_big(*b);
	b_smallest = find_smal(*b);
	b_small_pos = smalest_pos(*b);
	if ((*a)->num < b_smallest || (*a)->num > b_largest)
		i += x_amount_of(b, b_small_pos);
	return (i);
}

int	pos_for_a(t_nums **a, t_nums **b, int pos)
{
	int		i;
	t_nums	*temp;

	i = 0;
	temp = *a;
	if (*b)
	{
		if ((*b)->num > find_big(*a) || (*b)->num < find_smal(*a))
			sort_a_big_or_small(b, a);
		else
		{
			while (temp)
			{
				pos++;
				if (temp->next != NULL)
				{
					if ((*b)->num > temp->num && (*b)->num < temp->next->num)
						return (pos);
				}
				temp = temp->next;
			}
		}
	}
	return (pos);
}

int	pos_finder_test(t_nums *a, int small)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (a)
	{
		if (small == a->num)
			pos = i;
		i++;
		a = a->next;
	}
	return (pos);
}

int	sort_five(t_nums **a, t_nums **b, int i)
{
	int	pos;
	int	small;

	pos = 0;
	small = 0;
	*b = NULL;
	i += push_bb(a, b, i);
	i += sort_three(a);
	while (*b)
	{
		pos = 0;
		pos = pos_for_a(a, b, pos);
		i += x_amount_of(a, pos);
		push_a(a, b);
		write(1, "pa\n", 3);
	}
	small = find_smal(*a);
	pos = pos_finder_test(*a, small);
	i += x_amount_of(a, pos);
	return (i);
}
