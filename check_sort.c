/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:07:53 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/03 15:56:14 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	check_sort(t_nums *nums)
{
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
