/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_helper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:48:22 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/05 14:22:17 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	find_max(int *arr, t_nums *a)
{
	int	max;
	int	i;

	max = INT_MIN;
	i = 0;
	while (i < tot_b(a))
	{
		if (max < arr[i])
			max = arr[i];
		i++;
	}
	return (max);
}

int	*table_init(int *arr, int size)
{
	int	i;

	i = 0;
	arr = malloc(sizeof(int *) * size);
	if (!arr)
		return (NULL);
	while (i < size)
		arr[i++] = 1;
	return (arr);
}
