/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:14:30 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/10 08:26:08 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	tot_b(t_nums *b)
{
	int	i;

	i = 0;
	while (b)
	{
		i++;
		b = b->next;
	}
	return (i);
}
