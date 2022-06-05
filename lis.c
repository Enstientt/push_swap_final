/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:47:07 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/05 14:18:56 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	*lis01( t_nums *a)
{
	t_var	svar;
	t_nums	*head;
	t_nums	*tmp;

	head = a;
	svar.arr = table_init(svar.arr, tot_b(head));
	tmp = a->next;
	svar.i = 1;
	while (tmp->next)
	{
		head = a;
		svar.j = 0;
		while (head != tmp)
		{
			if (tmp->num > head->num && svar.arr[svar.i] < svar.arr[svar.j] + 1)
				svar.arr[svar.i] = svar.arr[svar.j] + 1;
			head = head->next;
			(svar.j)++;
		}
		tmp = tmp->next;
		(svar.i)++;
	}
	return (svar.arr);
}

int	the_lis(t_nums **a, int *arr)
{
	int		max;
	int		count;
	t_nums	*tmp;
	t_nums	*head;

	tmp = *a;
	head = *a;
	count = 0;
	max = find_max(arr,*a);
	while (tmp->next)
		tmp = tmp->next;
	while (max)
	{
		if (tmp->max == max)
		{
			tmp->vote = 1;
			max--;
			count++;
		}
		tmp = tmp->prev;
	}
	return (count);
}

int	mark_lis(int *arr, t_nums **a)
{
	int		i;
	t_nums	*tmp;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		tmp->max = arr[i];
		tmp->vote = 0;
		tmp->moves = INT_MAX;
		tmp = tmp->next;
		i++;
	}
	return (the_lis(a, arr));
}

int	the_ultimate_lis(t_nums **a)
{
	t_nums	*tmp;
	int		*arr;
	int		count;

	tmp = *a;
	arr = lis01(tmp);
	count = mark_lis(arr, a);
	free(arr);
	return (count);
}
