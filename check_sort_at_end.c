/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_at_end.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:22:09 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/04 12:05:45 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_sort_at_end(t_nums *nums, t_nums *b)
{
	if (b)
		return (0);
	if (!nums)
		return (0);
	while (nums)
	{
		if (nums->next)
		{
			if (nums->num > nums->next->num)
				return (0);
		}
		nums = nums->next;
	}
	return (1);
}
