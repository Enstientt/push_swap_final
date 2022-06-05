/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_cal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:48:34 by zessadqu          #+#    #+#             */
/*   Updated: 2022/06/04 11:52:53 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int	amount_moves(int total, int range_pos)
{
	if (range_pos <= total / 2)
		return (range_pos);
	else
		return (total - range_pos);
}
